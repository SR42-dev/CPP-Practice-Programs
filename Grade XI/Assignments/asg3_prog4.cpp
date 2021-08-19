#include <iostream.h>
#include <stdio.h>
#include <string.h>

void main()
{
	char str[50], rev[50];
	unsigned long int i, j, numvow = 0, numdig = 0, numwor = 0;
	cout<<"Input : ";
	gets (str);
	cout<<"Output : "<<endl;
	for (i=0,j=(strlen(str)-1);i<=(strlen(str));i++,j--)
	{
		if ((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||
		(str[i]=='U')||(str[i]=='a')||(str[i]=='e')||(str[i]=='i')||
		(str[i]=='o')||(str[i]=='u'))
			numvow++;
		else if ((str[i]>=48)&&(str[i]==58))
			numdig++;
		else if (str[i]==32)
			numwor++;
		rev[i]=str[j];
	}
   rev[i-1] = 0;
	numwor++;
	cout<<"	Number of vowels : "<<numvow<<endl;
	cout<<"	Number of digits : "<<numdig<<endl;
	cout<<"	Number of words : "<<numwor<<endl;
	cout<<"	Reverse of the sentence is : ";
	puts(rev);
}