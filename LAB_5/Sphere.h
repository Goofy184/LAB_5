#pragma once
#define _USE_MATH_DEFINES
#include "Volume.h"
#include <math.h>
class Sphere : public Volume
{
private:
	double radius = 0;
public:
	Sphere(double r);
	Sphere();
	double getVolume() const override;
};

