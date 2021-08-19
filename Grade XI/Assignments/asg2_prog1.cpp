#include <iostream.h>
#include <math.h>

void main()
{
	double lim1, lim2, k, count;
	unsigned long int num, i;
	cout<<"Enter the values of the two limits"<<endl;
	cin>>lim1>>lim2;
   cout<<endl;
	cout<<"The prime numbers between "<<lim1<<" and "<<lim2<<" are : "<<endl;
	k = lim1;
	while (k<=lim2)
	{
		num = k;
		count = 0;
		i = 2;
		while (i<=(sqrt(num)))
		{
			if (num%i==0)
			{
				count++;
				break;
			}
			i++;
		}
		if (count==0)
			cout<<num<<endl;
		k++;
	}
}