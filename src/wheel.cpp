#include "wheel.h"

wheel::wheel(int spp1, int spp2, int mpp1, int mpp2, int mp, float pX, float pY) {
	servopin1 = spp1;
	servopin2 = spp2;
	motorpin1 = mpp1;
	motorpin2 = mpp2;
	magpin = mp;
	posX = pX;
	posY = pY
}

void wheel::setTmax(float tmx) {
	tMax = tmx;
}
void wheel::update(float x, float y, float tdir) {

}
