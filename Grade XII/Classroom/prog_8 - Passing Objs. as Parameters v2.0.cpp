/* A program to demonstrate the passing of an object as a parameter to a non-member function */

#include <iostream.h>

class info
{
	private :

		int x;
		float y;

	public :

		void init(int x, float y);
		void out();
		void change();

};

void nonMemF1(info I1)
{
	I1.out();
	I1.change();
	I1.out();
}

void nonMemF2(info &I2)
{
	I2.change();
	I2.out();
}

void info :: init(int x, float y)
{
	info :: x = x;
	info :: y = y;
}

void info :: out()
{
	cout<<"x = "<<x<<"& y = "<<y<<endl;
}

void info :: change()
{
	x += x + y;
}

void main()
{
	info I3, I4;
	I3.init(6, 9.5);
	I4.init(8, 10.5);
	I3.out();
	I4.out();
	nonMemF1(I3);
	I3.out();
   nonMemF2(I4);
	I4.out();
}
