#include <iostream>

class BaseOne
{
private:
	int base_one;
public:
	BaseOne( int n = 10 )
		: base_one( n )
	{
	}

	int getInt()
	{
		return base_one;
	}
};


class BaseTwo
{
private:
	int base_two;
public:
	BaseTwo( int n = 10 )
		: base_two( n )
	{
	}

	int getInt()
	{
		return base_two;
	}
};


class DerivedOne : public BaseOne
{
private:
	int derived_one;
public:
	DerivedOne( int n = 11 )
		: derived_one( n )
	{
	}

	int getIntDerived()
	{
		return derived_one;
	}
};

class DerivedTwo : public BaseOne, public BaseTwo
{
public:
	int getIntDerivedTwo()
	{
		return 12;
	}
};


int main()
{
	int ( DerivedTwo::*d_two_ptr )() = &DerivedTwo::BaseOne::getInt;
	int ( BaseOne::*ptr)() = &DerivedTwo::BaseOne::getInt;
	DerivedTwo d;
	
	int ( BaseOne::*b_one_ptr )() = &BaseOne::getInt;

	using std::cout;
	using std::endl;
	
	cout << ( d.*d_two_ptr )() << endl;
	cout << d_two_ptr << endl << b_one_ptr << endl << ptr << endl;
	return 0;
}