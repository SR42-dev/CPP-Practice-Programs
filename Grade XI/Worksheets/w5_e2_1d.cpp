#include <iostream.h>

void main()
{
	unsigned long int n, i, j, sum=0;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			sum = sum + j;
		}
	}
	cout<<"Sum = "<<sum<<endl;
}