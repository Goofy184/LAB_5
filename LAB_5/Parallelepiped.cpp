#include "Parallelepiped.h"
Parallelepiped::Parallelepiped() {
}
Parallelepiped::Parallelepiped(double a, double b, double c) {
	stoA = a;
	stoB = b;
	stoC = c;
}
double  Parallelepiped::getVolume() const {
	return stoA * stoB * stoC;
}