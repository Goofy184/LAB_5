#include "Sphere.h"
Sphere::Sphere() {
};
Sphere::Sphere(double r) {
	radius = r;
};
double Sphere::getVolume() const {
	return  4 / 3 * (M_PI * pow(radius, 3));
}
