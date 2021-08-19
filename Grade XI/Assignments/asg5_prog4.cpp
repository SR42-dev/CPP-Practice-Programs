#include<iostream.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

int count_alpha(char str[])
{
 int i,count=0;
 for(i=0;str[i]!=0;i++)
	{
	 if(isalpha(str[i]))
		count++;
	}
 return count;
}

int count_symbols(char str[])
{
 int i,count=0;
 for(i=0;str[i]!=0;i++)
	{
	 if(ispunct(str[i]))
		count++;
	}
 return count;
}

void rev_words(char str[])
{
 int i,lb=0,j,k,pos=-1,temp;
 for(i=0;str[i]!=0;i++)
	{
	 if(str[i+1]==32||str[i+1]==0)
		{
		 pos=i;
		 for(j=lb,k=pos;j<k;j++,k--)
			{
			 temp=str[j];
			 str[j]=str[k];
			 str[k]=temp;
			}
		 lb=i+2;
		}
	}
 cout<<"The sentence after reversal is as follows : ";
 puts(str);
}

void main()
{
 char c,mks[50];
 int i,ch;
 cout<<"Input the sentence : "<<endl;
 gets(mks);

 do
 {
  clrscr();

  cout<<"Menu"<<endl;
  cout<<"1. Alphabet count"<<endl;
  cout<<"2. Symbol count"<<endl;
  cout<<"3. Reversal"<<endl;

  cout<<"\nEnter the number corresponding to your choice : "<<endl;
  cin>>ch;

  switch(ch)
  {
	case 1:
		cout<<"Therefore, the number of alphabets in the sentence is "<<count_alpha(mks)<<endl;
		break;
	case 2:
		cout<<"Therefore, the number of symbols is : "<<count_symbols(mks)<<endl;
		break;
	case 3:
		rev_words(mks);
		break;
	default:
		cout<<"Invalid, try again"<<endl;
  }
  cout<<endl;
  cout<<"Press any key to continue"<<endl;
  c=getch();
 }while(1);
}
