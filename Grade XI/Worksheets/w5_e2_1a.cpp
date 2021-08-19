#include <iostream.h>
void main()
{
	unsigned long int i, sum=0;
	for (i=23;i<=50;i+=3)
	{
		cout<<i<<", ";
		sum = sum+i;
	}
	cout<<"\b\b Sum = "<<sum<<endl;
}