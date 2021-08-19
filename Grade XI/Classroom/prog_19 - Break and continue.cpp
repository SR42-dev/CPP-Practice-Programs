/*A program to demostrate the usage of unconventional header files
as well as the 'break' and 'continue' keywords*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	long int i, j;
	for (j=4, i=3;j<=30;i+=2,j++)
	{
		if (i%5==0&&j%5==0)
		{
			cout<<i*j<<endl;
			break;
 		}
		else if (i%5==0||j%5==0)
		{
			cout<<i/j<<endl;
			continue;
			clrscr();
		}
		getch();
	}
}