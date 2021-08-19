#include <iostream.h>
#include <stdio.h>

void main()
{
	char str1[32], str2[32];
	int i;
	cout<<"Enter a string : "<<endl;
	gets (str1);
	for (i=0;str1[i]!=0;i++)
	{
		str2[i] = str1[i];
		if (str2[i]==32)
			str2[i] = '\n';
	}
	str2[i] = 0;
	cout<<endl;
	cout<<"Input : "<<str1<<endl;
	cout<<"Output : "<<str2<<endl;
}