#include <iostream.h>
void main()
{
	unsigned long int i, j, sum=0;
	for (i=1, j=2;j<=10;i++,j++)
	{
		cout<<i<<"x"<<j<<", ";
		sum = sum+(i*j);
	}
	cout<<"\b\b Sum = "<<sum<<endl;
}