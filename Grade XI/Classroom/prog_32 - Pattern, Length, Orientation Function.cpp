/* A program to demonstrate the usage of function a patterned line function and
	its application in void main() */

#include <iostream.h>

void pwl(char c, int i, char o) // Default parameters from right to left only
{
	int j;
	for(j=0;j<=i;j++)
	{
		if ((o == 'H')||(o == 'h'))
			cout<<c;
		else if ((o == 'V')||(o == 'v'))
			cout<<c<<endl;
	}
}

void main()
{
	pwl('$', 30, 'H');
	cout<<endl;
	pwl('*', 20, 'V');
}
