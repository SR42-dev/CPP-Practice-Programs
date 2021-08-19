#include<iostream.h>
#include<math.h>

void main()
{
	unsigned long int fact=1,sum=0, i, x, n, j, k, sign=1;
	cin>>x>>n;
	for(i=2,j=1,k=1;j<=2*n;i=i+2,j++,k+=2)
	{
		fact=fact*i*(i-1);
		sum=sum+(fact*sign*pow(x,k));
		sign=-sign;
		cout<<i<<"!"<<pow(x,k)<<"+";
	}
	cout<<"\b="<<sum<<endl;
}
