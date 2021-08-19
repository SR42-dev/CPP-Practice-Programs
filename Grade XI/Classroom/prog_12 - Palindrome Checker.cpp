/* A program that checks if a number is a palindrome */

#include <iostream.h>
#include <math.h>

void main()
{
	double j, nod=0, temp, rev=0;
	long int d, num;
	cin>>num;
	temp=num;
	for(;num!=0;nod++)
		num=num/10;
	j=nod-1;
	num=temp;
	for(;num!=0;)
	{
		d=num%10;
		rev=rev+(d*pow(10,j));
		j--;
		num=num/10;
	}
	if (temp==rev)
	cout<<"Palindrome"<<endl;
	else
	cout<<"Not a palindrome"<<endl;
}