#include <iostream.h>
#include <math.h>
void main()
{
	unsigned long int i, n, sum=0;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<i<<"^2 + ";
		sum = sum+pow(i,2);
	}
	cout<<"\b\b Sum = "<<sum<<endl;
}
