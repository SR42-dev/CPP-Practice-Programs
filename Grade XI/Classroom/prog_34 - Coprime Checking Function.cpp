/* A program that checks if the two numbers given to it as parameters are
	co-prime or not */

#include "D:\masterheader.cpp"

void main()
{
	int a, b;
	cout<<"Input the two numbers to be checked :"<<endl;
	cin>>a>>b;
	cout<<endl;
	if (gcd(a, b) == 1)
		cout<<"The numbers are coprime"<<endl;
	else
		cout<<"The numbers aren't coprime"<<endl;
}
