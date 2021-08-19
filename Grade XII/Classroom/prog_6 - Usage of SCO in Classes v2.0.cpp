/* A program to demonstrate the usage of scope resolution operator in classes - v2.0 */

#include <iostream.h>
#include <stdio.h>

float y;
class sample
{
	private :

		int x;
		float y;
		int data[5];

	public :

		void init(int p, float f, int d[]);
		void out();
};

sample s1;

void sample :: init(int p, float f, int d[])
{
	x = p;
	sample :: y = y;
   sample :: y = :: y;
	for (int i; i < 5; i++)
		data[i] = d[i];
}


void sample :: out()
{
	cout<<x<<" "<<y<<endl;
	for (int i = 0; i < 5; i++)
		cout<<data[i]<<endl;
}

void main()
{
	sample s2;
	int c1 = 5;
	float f1 = 6;
	int d2[] = {2, 3, 4, 5};
	s2.init(c1, f1, d2); // dynamic initialisation
	s1.out();
}