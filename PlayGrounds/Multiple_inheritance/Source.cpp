

class Point2d
{
public:
	virtual ~Point2d()
	{
	}
protected:
	float _x, _y;
};

class Vertex
{
public:
	~Vertex()
	{
	}
protected:
	Vertex *next;
};

class Vertex2d : 
	public Point2d, public Vertex
{
public:
	virtual ~Vertex2d()
	{
	}
protected:
	float mumuble;
};

int main()
{
	return 0;
}