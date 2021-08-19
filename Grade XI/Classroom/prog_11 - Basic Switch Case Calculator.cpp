/* An improvement on the previous calculator program */

#include <iostream.h>
#include <math.h>

void main()

{
	int a,b;
	double s,d,p,q;
	char o;
	cout<<"Enter 2 integers followed by s, d, p, q or w for ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION and EXPONENT  respectively"<<endl;
	cin>>a>>b;
	cin>>o;
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	switch (o)
	{
		case 's':
			cout<<"a+b="<<s<<endl;
			break;
		case 'd':
			cout<<"a-b="<<d<<endl;
			break;
		case 'p':
			cout<<"a*b="<<p<<endl;
			break;
		case 'q';
			cout<<"a/b="<<q<<endl;
			break;
		default:
			cout<<"Invalid Operator Requested"<<endl;
	}
}