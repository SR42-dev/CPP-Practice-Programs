/* A program that detects the number of characters in each row of a char
array */

#include "D:\M.cpp"

void main()
{
	char nam[15][30];
	int i;
	for(i=0;i<5;i++)
	{
		gets(nam[i]);
	}
   cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<nam[i]<<endl;
		cout<<"No. of characters = "<<strlen(nam[i])<<endl;
	}
	for(i=0;i<5;i++)
	{
		if(nam[i][0]=='M')
			cout<<nam[i]<<endl;
	}
}


