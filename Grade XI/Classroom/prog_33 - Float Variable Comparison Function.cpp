/* A program that takes 3 float type parameters and compares them to find the
	largest of the three (Demonstrated using code in void main()) */

#include <iostream.h>

float max(float, float, float);
void main()
{
	float i = 5, j = 6.5, k = 2.5;
	cout<<max(15, 3, 4.25)<<endl;
	if (max(i,j,k) == 6.5)
		cout<<"True"<<endl;
	float g = max(i+3,j,k);
	cout<<g<<endl;
}

float max(float p, float q, float r)
{
	if (p>=q && p>=r)
		return p; // Gives 'p' is given as the function output
	else if (q>=p && q>=r)
		return q;
	else
	 return r;
}