#include <iostream.h>

void main()
{
	unsigned long int i, sum = 0, prod = 1, n, num;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>num;
		sum = sum + num;
		prod = prod * num;
	}
	cout<<"The sum of the accepted numbers is equal to "<<sum<<endl;
	cout<<"The product of the accepted numbers is equal to "<<prod<<endl;
}