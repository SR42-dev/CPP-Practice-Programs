#include <iostream.h>

void line()
{
	cout<<endl;
	cout<<"____________________________________________________"<<endl;
	cout<<endl;
}

void main()
{
	unsigned long int i, j;
	for (i=3;i>=1;i--)
	{
		for (j=1;j<=3;j++)
			cout<<i<<" "<<j<<endl;
	}

	line();

	for (i=1;i<=4;i++)
	{
		for (j=1;j<=i;j++)
			cout<<j<<" ";
		cout<<endl;
	}

	line();

	for (i=1;i<=4;i++)
	{
		for (j=1;j<=i;j++)
			cout<<i<<" ";
		cout<<endl;
	}

	line();

	for (i=1;i<=4;i++)
	{
		for (j=4;j>=i;j--)
			cout<<j<<" ";
		cout<<endl;
	}

	line();

	for (i=4;i>=1;i--)
	{
		for (j=1;j<=i;j++)
			cout<<i<<" ";
		cout<<endl;
	}

	line();
}