/* To find the greatest common divisor and the lowest common
	multiple of a given number*/

#include <iostream.h>

void main()
{
	int a, b, gcd1, num, j, lcm1;
	cout<<"Enter any two numbers"<<endl;
	cin>>a>>b;
	a<b ? num = a: num = b;
	for (j=num;j>=1;j--)
	{
		if (a%j==0&&b%j==0)
		{
			gcd1 = j;
			break;
		}
	}
	lcm1 = (a*b)/gcd1;
	cout<<"HCF = "<<gcd1<<" & LCM = "<<lcm1<<endl;
}