/* A program that converts a value input in feet to inches */

#include<iostream.h>
void main()
{
	int a,b,c;
	cout<<"Enter any length in inches"<<endl;
	cin>>a;
	b=a/12;
	c=a%12;
	cout<<b<<" Feet &"<<c<<" Inches"<<endl;
}
