#include <iostream.h>
#include <math.h>

void main()
{
	double i, j, n, x, term1, fact1 = 1, sum1 = 0, sign = 1;
	cout<<"Enter the x value :"<<endl;
	cin>>x;
	cout<<"Enter the n value :"<<endl;
	cin>>n;
	for (i=1;i<=n;i+=2)
	{
		for (j=1;j<=i;j++)
			fact1 = fact1*j;
		term1 = pow(x,i)/i;
		sum1 = sum1 + sign*term1;
		sign = -sign;
	}
	cout<<endl;
	cout<<"The sum of the series where x = "<<x<<" and n = "<<n<<" is : "<<sum1<<endl;
}