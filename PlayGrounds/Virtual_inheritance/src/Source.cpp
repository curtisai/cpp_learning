#include <iostream>

class Point2d
{
public:
	virtual ~Point2d() = 0;
protected:
	float _x, _y;
};

class Vertex : public virtual Point2d
{
public:
protected:
	Vertex *next;
};

class Point3d : public virtual Point2d
{
public:
protected:
	float _z;
};

class Vertex3d : public virtual Point3d, public virtual Vertex
{
public:
protected:
	float mumble;
};



int main()
{
	return 0;
}