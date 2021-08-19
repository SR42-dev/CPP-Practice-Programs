#include <iostream.h>
#include <math.h>

void main()
{
	double lim1, lim2, k, count;
	unsigned long int num, i;
	cin>>lim1>>lim2;
	for (k=lim1;k<=lim2;k++)
	{
		num = k;
		count = 0;
		for (i=2;i<=(sqrt(num));i+=2)
		{
			if (num%i==0)
			{
				count++;
				break;
			}
		}
		if (count==0)
			cout<<num<<endl;
	}
}
