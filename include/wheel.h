class wheel {
public:
	float posX, posY, tMax;
	int servopin1, servopin2, motorpin1, motorpin2, magpin;

	wheel(int spp1, int spp2, int mpp1, int mpp2, int mp, float pX, float pY);
	void setTmax(float tmx);
	void update(float x, float y, float tdir);
	
}
