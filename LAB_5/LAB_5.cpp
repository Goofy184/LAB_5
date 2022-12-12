#include <iostream>
#include "Sphere.h"
#include "Pentahedron.h"
#include "Parallelepiped.h"
using namespace std;
int main()
{
    Volume& sphLink = *(new Sphere(5));
    Volume& parLink = *(new Parallelepiped(13, 1, 2));
    Volume& pirLink = *(new Pentahedron(22, 8));
    cout << "Sphere link volume: " << sphLink.getVolume() << endl;
    cout << "Parallelepiped link volume : " << parLink.getVolume() << endl;
    cout << "Pentahedron link volume : " << pirLink.getVolume() << endl;
    delete &sphLink;
    delete &parLink;
    delete &pirLink;
}