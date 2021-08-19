/* A program that checks if a given number is an angstrom number */

#include <iostream.h>
#include <math.h>

void main()
{
	long int count=0, n, a, sum=0, temp, i,s;
	cin>>n;
	temp=n,s=n;
	for(;n>0;count++)
		n/=10 ;
	for(;s>0;)
	{
		a=s%10;
		s/=10;
		sum+=pow(a,count);
	}

	if(sum==temp)
		cout<<"Diese ist ein "<<char(197)<<"ngstromnummer"<<endl;
	else
		cout<<"Diese ist nicht ein "<<char(197)<<"ngstromnummer"<<endl;
}