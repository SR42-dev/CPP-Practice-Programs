#include <iostream.h>

void main()
{
	int a=1, b=1, c=1, d, i, n;
	cout<<"Enter the number of terms desired :"<<endl;
	cin>>n;
   cout<<endl;
	cout<<"The "<<n<<" terms of the Tribonacci series :"<<endl;
	cout<<a<<", "<<b<<", "<<c<<", ";
	for (i=3; i<=(n-1);i++)
	{
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		cout<<d<<", ";
	}
	cout<<"\b\b"<<endl;
}