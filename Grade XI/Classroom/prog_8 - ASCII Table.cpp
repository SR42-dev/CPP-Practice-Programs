/* A program that prints the ASCII table until 255 characters */

#include<iostream.h>
void main()
{
	int i;
	for(i=1;i<=255;i++)
		cout<<i<<" => "<<char(i)<<endl;
}