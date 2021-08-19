#include <iostream.h>
void main()
{
	int a=0, b=1, c, n, i;
	cin>>n;
	cout<<a<<", "<<b<<", ";
	for (i=3; i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<", ";
	}
   cout<<"\b\b"<<endl;
}