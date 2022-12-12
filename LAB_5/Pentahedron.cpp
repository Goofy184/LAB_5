#include "Pentahedron.h"
Pentahedron::Pentahedron() {
}
Pentahedron::Pentahedron(double height, double baseEdge) {
	this->height = height;
	this->baseEdge = baseEdge;
}
double Pentahedron::getAreaOfBase() const
{
	return baseEdge * baseEdge;
}
double  Pentahedron::getVolume() const {
	return (1. / 3) * getAreaOfBase() * height;
}