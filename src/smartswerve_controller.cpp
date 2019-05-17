#include "smartswerve_controller.h"

smartswerve_controller::smartswerve_controller() {
	wheel_array.push(new wheel(0,0,0,0,0,-1,-1);
	wheel_array.push(new wheel(0,0,0,0,0,-1,1);
	wheel_array.push(new wheel(0,0,0,0,0,1,1);
	wheel_array.push(new wheel(0,0,0,0,0,1,-1);
	updateT();
}

void smartswerve_controller::updateT() {
	float largest_distance = 0;
	int largest_distance_index = 0;
	for(int i = 0;i < wheel_array.size();i++) {
		if(wheel_array[i].posX*wheel_array[i].posX + wheel_array[i].posY*wheel_array[i].posY > largest_distance) {
			largest_distance = wheel_array[i].posX*wheel_array[i].posX + wheel_array[i].posY*wheel_array[i].posY;
			largest_distance_index = i;
		}
	}
	
}

void smartswerve_controller::update(float x, float y, float tdir) {
	for(int i = 0;i < wheel_array.size();i++) {
		wheel_array[i].update(x,y,tdir);
	}
}

void smartswerve_controller::update(float dx, float dy) {
	for(int i = 0;i < wheel_array.size();i++) {
		wheel_array[i].posX += dx;
		wheel_array[i].posY += dy;
	}
}
