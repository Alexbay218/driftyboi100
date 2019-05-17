#include <vector>
#include "wheel.h"

class smartswerve_controller {
public:
	std::vector<wheel> wheel_array;
	float tMax;

	smartswerve_controller();
	void updateT();
	void update(float x, float y, float tdir);
	void changeCR(float dx, float dy);
}
