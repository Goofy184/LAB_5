#pragma once
#include "Volume.h"
class Pentahedron : public Volume
{
private:
	double height = 0;
	double baseEdge = 0;
public:
	Pentahedron();
	Pentahedron(double height, double baseEdge);
	double getAreaOfBase() const;
	double getVolume() const override;
};

