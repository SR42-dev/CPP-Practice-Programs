/* To find the factorial of a given nummber*/

#include <iostream.h>

void main()
{
	double i, n, prod1=1;
	cout<<"Enter the desired number"<<endl;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		cout<<i<<" * ";
		prod1 = prod1*i;
	}
	cout<<"\b\b = "<<prod1;
}