#include <iostream.h>

void main()
{
	unsigned long int i, n, sum1 = 1, num1 = 1;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<num1<<" + ";
		num1 = (num1 * 10) + 1;
		sum1 = sum1 + num1;
	}
	cout<<"\b\b"<<endl;
	cout<<"Sum = "<<sum1;
}