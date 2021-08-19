/* A program intended to calculate the mean temperature out of a set of
	values taken from the user */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 float temp[7],tot=0,avg;
 int i;

 for(i=0;i<=6;i++)
	{
	 cout<<"Enter temperature today at noon in Kelvin(+273)"<<endl;
	 cin>>temp[i];
	 tot=+temp[i];
	}
 avg=tot/7;

 for(i=0;i<=6;i++)
	cout<<"Temperature on "<<i<<" th day is "<<temp[i]<<endl;
 cout<<"Average Temperature is "<<avg<<endl;
}
