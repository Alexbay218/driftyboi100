#include <wiringPiI2C.h>
#include <string>
#include <sstream>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

std::string i2cread(int fd) {
	int dsize = 0;
	std::stringstream res;
	res.clear();
	wiringPiI2CWriteReg8(fd, 0, 1);
	dsize = wiringPiI2CReadReg8(fd,1);
	if(dsize > 0) {
		for(int i = 1;i <= dsize;i++) {
			wiringPiI2CWriteReg8(fd, i, 1);
			res << (char)wiringPiI2CReadReg8(fd, 1);
		}
	}
	return res.str();
}

int main() {
	int teensy = wiringPiI2CSetup(4);
	std::string newRes = "";
	std::string oldRes = "";
	while(true) {
		newRes = i2cread(teensy);
		//if(oldRes.compare(newRes) != 0) {
			std::cout << newRes << std::endl;
		//}
		oldRes = newRes;
		std::this_thread::sleep_for(1000ms);
	}
}
