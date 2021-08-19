#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 char sent[100],temp[20],search[20];
 cout<<"Enter sentence"<<endl;
 gets(sent);
 cout<<"Enter search word"<<endl;
 gets(search);
 int i,j,k,ub,lb=0,cou=0;

 for(i=0;i<=strlen(sent);i++)
	{
	 if(sent[i]==32||sent[i]==0)
		{
		 ub=i-1;
		 for(j=lb,k=0;j<=ub;j++,k++)
			temp[k]=sent[j];
			temp[k]=0;

		 if(strcmpi(search,temp)==0)
			cou++;

		 lb=i+1;
		}
	}
 if(cou==0)
	cout<<"Word not found"<<endl;
 else
	cout<<"The word "<<search<<" was found "<<cou<<" times in the sentence"<<endl;
}


