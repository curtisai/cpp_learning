#include <iostream>

using std::cout;
using std::endl;

class Point3D
{
public:
	float x, y, z;
public:
	Point3D translate( const Point3D &pt )
	{
		x += pt.x;
		y += pt.y;
		z += pt.z;
		return *this;
	}
};


int main()
{
	Point3D origin;
	cout << &origin.x << endl << &origin << endl;
    cout << &Point3D::x << endl << &Point3D::y << endl << &Point3D::z << endl; 
	return 0;
}