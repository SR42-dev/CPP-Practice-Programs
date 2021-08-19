#include <iostream.h>
void main()
{
	unsigned long int i, j, k, n, sum=0;

	cin>>n;
	for (i=1, j=2, k=3;k<=n;i++,j++,k++)
	{
		cout<<"("<<i<<"*"<<j<<"*"<<k<<")+";
		sum = sum+(i*j*k);
	}
	cout<<"\b Sum = "<<sum<<endl;
}
