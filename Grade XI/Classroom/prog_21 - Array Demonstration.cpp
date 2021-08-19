/*A program to demonstrate the various aspects of character arrays and how they
are to be processed */

#include <iostream.h>
#include <stdio.h>

void line()
{
	cout<<endl;
	cout<<"________________________________________________"<<endl;
	cout<<endl;
}

void main()
{
	char color[10] = "GREEN", nam1[20];
	int B[10], i;
	line();
	cout<<color<<endl;
	cout<<color[0]<<endl;
	cout<<color[1]<<endl;
	cout<<color[2]<<endl;
	cout<<color[3]<<endl;
	cout<<color[4]<<endl;
   cout<<endl;
	cout<<int(color[5])<<endl;
	line();
	cout<<sizeof(B)<<endl;
	line();
	gets(nam1);
	puts(nam1);
	for (i=0;nam1[i]!=0;i++)
		cout<<nam1[i]<<endl;
}