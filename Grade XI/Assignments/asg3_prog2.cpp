#include <iostream.h>
#include <string.h>
#include <stdio.h>

void main()
{
	char sent[50], str[50];
	unsigned long int i;
	cout<<"Input : ";
	gets(sent);
	for (i=0;i<=(strlen(sent));i++)
	{
		if ((sent[i]>=65)&&(sent[i]<=91))
			str[i] = sent[i]+32;
		else
			str[i]=sent[i];
	}
	cout<<"Output : ";
	puts (str);
}
