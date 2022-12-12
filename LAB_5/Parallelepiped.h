#pragma once
#include "Volume.h"
class Parallelepiped :public Volume
{
private:
	double stoA = 0;
	double stoB = 0;
	double stoC = 0;
public:
	Parallelepiped();
	Parallelepiped(double a, double b, double c);
	double getVolume() const override;
};

