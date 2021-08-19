/* A program that assigns an array into another array with its elements
	in the same order and in reverse */

#include <iostream.h>
#include <stdio.h>

void main()
{
	char str1[15], str2[15], rev[15];
	int i, j;
   cout<<"Enter a string that doesn't exceed 15 bytes :"<<endl;
	gets (str1);
	cout<<endl;
	for (i=0;str1[i]!=0;i++)
		str2[i] = str1[i];
	str2[i] = 0;
	i--;
	for (j=0;i>=0;j++,i--)
		rev[j] = str1[i];
	rev[j] = '\0';
	puts (str2);
	puts (rev);
}
