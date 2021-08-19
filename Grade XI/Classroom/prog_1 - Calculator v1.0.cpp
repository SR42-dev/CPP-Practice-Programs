/* A basic calculator that displays the required results */

#include <iostream.h>
void main()
{
	int a,b;
	double s,d,p,q;
	cout<<"Enter two integers"<<endl;
	cin>>a>>b;
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	cout<<"Therefore the sum of a and b is equal to "<<s<<endl;
	cout<<"Therefore the difference of a and b is equal to "<<d<<endl;
	cout<<"Therefore the product of a and b is equal to "<<p<<endl;
	cout<<"Therefore the quotient of a and b is equal to "<<q<<endl;
}
