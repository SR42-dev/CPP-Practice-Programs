#include <iostream.h>

void main()
{
	unsigned long int i, j, n, sum1 = 0, fact1 = 1;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
			fact1 = fact1*j;
		sum1 = sum1 + fact1;
	}
   cout<<"Sum = "<<sum1;
}
