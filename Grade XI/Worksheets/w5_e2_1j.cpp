#include <iostream.h>
#include <math.h>

void main()
{
	double i, j, n, x, term1, fact1 = 1, sum1 = 1;
	cin>>x;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
			fact1 = fact1*j;
		term1 = pow(x,i)/fact1;
		sum1 = sum1 + term1;
	}
	cout<<"Sum = "<<sum1<<endl;
}