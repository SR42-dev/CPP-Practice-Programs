#include <iostream.h>
#include <stdio.h>

void main()
{
	char str1[20], str2[20];
	int i;
	cout<<"Enter the string :"<<endl;
	gets (str1);
	cout<<endl;
	for (i=0;str1[i]!=0;i++)
	{
		str2[i] = str1[i];
		if (str2[i]=='A'||str2[i]=='E'||str2[i]=='I'||str2[i]=='O'||str2[i]=='U'||
		str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u')
		str2[i] = '-';
	}
   str2[i] = 0;
	cout<<"Input : "<<str1<<endl;
	cout<<"Output : "<<str2<<endl;
}