#include <iostream.h>
#include <stdio.h>
#include <string.h>

void main()
{
	char str[32], rev[32];
	int i, j;
	cout<<"Enter a word : "<<endl;
	gets (str);
	for (i=0,j=strlen(str)-1;str[i]!=0;i++,j--)
		rev[i] = str[j];
	rev[i] = 0;
	if (strcmp(str,rev)==0)
		cout<<str<<" is a palindrome"<<endl;
	else
		cout<<str<<" is not a palindrome"<<endl;
}