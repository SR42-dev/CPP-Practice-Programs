#include <iostream.h>
#include <math.h>

void main()
{
	double i, j, k, x, n, fact = 1, sum = -1, sign = -1;
	cin>>x>>n;
	for(i=4,j=1,k=1;j<=2*n;i=i+3,j++,k+=2)
	{
		fact = fact * i * (i-1);
		sum = sum + ((fact * sign)/ (sign * pow(x,k)));
		sign =-sign;
		cout<<i<<"!/"<<pow(x,k)<<"+";
	}
	cout<<"\b\nSum = "<<sum<<endl;
}
