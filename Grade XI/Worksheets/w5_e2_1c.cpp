#include <iostream.h>
void main()
{
	unsigned long int i, j, sum=0;
	for (i=1, j=30;i<=30;i++,j--)
	{
		cout<<i<<"/"<<j<<", ";
		sum = sum+(i/j);
	}
	cout<<"\b\b Sum = "<<sum<<endl;
}