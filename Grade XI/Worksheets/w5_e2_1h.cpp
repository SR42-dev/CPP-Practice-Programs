#include <iostream.h>
#include <math.h>
void main()
{
	unsigned long int i, n, x, sum=0;
	cin>>n>>x;
	cout<<"1 + "<<x<<" + ";
	for (i=2;i<=n;i++)
	{
		cout<<x<<"^"<<i<<" + ";
		sum = sum+pow(x,i);
	}
	cout<<"\b\b Sum = "<<sum<<endl;
}