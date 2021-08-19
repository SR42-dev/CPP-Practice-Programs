#include <iostream.h>
#include <math.h>

void main()
{
	double i, j, n, x, fact1 = 1, sum1 = 0, sign = -1;
	cout<<"Enter the x value :"<<endl;
	cin>>x;
	cout<<"Enter the n value :"<<endl;
	cin>>n;
	for (i=2,j=1;i<=(2*n);i+=2,j++)
	{
		fact1*=(i*(i-1));
		sum1 += ((pow(x,j)/fact1)*sign);
		sign*=-1;
	}
	cout<<endl;
	cout<<"The sum of the series is : "<<(sum1+1)<<endl;
}