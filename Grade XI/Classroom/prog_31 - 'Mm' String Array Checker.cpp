/* A program that verifies if a string begins with an 'M' or an 'm' */

#include <iostream.h>
#include <stdio.h>
#include <string.h>

void main()
{
	char str[5][25];
	int i, j, k, snum[5];
	cout<<"Enter 5 strings :"<<endl;
	for (i=0;i<5;i++)
		gets (str[i]);
	for (i=0,j=0,k=0;i<5;i++,k++)
	{
		if ((str[i][j] == 'M')||(str[i][j] == 'm'))
			snum[k] = i + 1;
		else
			snum[k] = 0;
	}
	cout<<endl<<endl;
	for(i=0;i<5;i++)
		if (snum[i]!=0)
			cout<<"A word beginning with 'M/m' was found at row index "<<snum[i]<<endl;
}
