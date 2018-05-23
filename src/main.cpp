#include <wiringPiI2C.h>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main() {
	int teensy = wiringPiI2CSetup(4);
	//wiringPiI2CWrite(teensy, 90);
	while(true) {
		std::cout << wiringPiI2CRead(teensy) << std::endl;
		std::this_thread::sleep_for(1s);
	}
}
