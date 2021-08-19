/* An improved version of the previous calculator program */

#include <iostream.h>
#include <math.h>
void main()
{
	int a,b;
	double s,d,p,q;
	float w;
	char o;
	cout<<"Enter 2 integers followed by s, d, p, q or w for ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION and EXPONENT  respectively"<<endl;
	cin>>a>>b;
	cin>>o;
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	w=pow(a,b);
	if (o=='s')
		cout<<"a+b="<<s<<endl;
	if (o=='d')
		cout<<"a-b="<<d<<endl;
	if (o=='p')
		cout<<"a*b="<<p<<endl;
	if (o=='q')
		cout<<"a/b="<<q<<endl;
	if (o=='w')
		cout<<"a^b="<<w<<endl;
}
