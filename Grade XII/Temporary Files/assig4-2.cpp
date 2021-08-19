#include <string.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <fstream.h>

class String
{
  char str[80];

  public:

 void createfile()
 {
	fstream f;
	int N;
	char str[80];
	f.open("letter.txt",ios::out);
	cout<<"ENTER NUMBER OF LINES"<<endl;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cout<<"ENTER LINE"<<endl;
		gets(str);
		f<<str<<endl;
	}
	f.close();
 }

 void readfile()
 {
	fstream f;
	char str[80],fn[10];
	cout<<"ENTER FILE NAME"<<endl;
	gets(fn);
	strcat(fn, ".txt");
	f.open(fn,ios::in);
	while(f)
	{
	  f.getline(str,80,'\n');
     for(int i=0;i<strlen(str);i++)
	  {
		 if(isupper(str[i])!=0)
			 str[i]=tolower(str[i]);
		 else if(islower(str[i])!=0)
			 str[i]=toupper(str[i]);
	  }
	  cout<<str<<endl;
	}
	f.close();
}


void updatefile()
{
  fstream f;
  f.open("letter.txt",ios::in|ios::out|ios::binary);
  char ch;
  while(f.get(ch))
  {
	 if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	 {
		f.seekp(-1,ios::cur);
		ch='*';
		f<<ch;
	 }
  }
  cout<<"UPDATION DONE"<<endl;
  f.close();
}


void searchfile()
{
	fstream f;
	char str[80],word[20],temp[20];
	int l,k=0;
	cout<<"ENTER WORD TO BE SEARCHED"<<endl;
	gets(word);
	f.open("letter.txt",ios::in);
	while(f.getline(str,80,'\n'))
	{
	  int count=0;
	  l=strlen(str);
	  for(int i=0;i<=l;i++)
	  {
		 if(str[i]!= ' ' && str[i]!= '\0')
		 {
			temp[k]=str[i];
			k++;
		 }
		 else
		 {
			temp[k]='\0';
			k=0;
			if(strcmpi(temp,word)==0)
			  count++;
		 }
	  }
     cout<<str<<endl;
	  if(count==0)
			cout<<"THE WORD  "<<word<<" DOESNT OCCUR IN THIS LINE"<<endl;
	  else
     cout<<"THE WORD "<<word<<" OCCURS "<<count<<" TIME"<<endl;
	}
	f.close();
}

};

void main()
 {
	int ch,c;
	String S;
	do
	{
	  clrscr();
	  cout<<"MENU"<<endl;
	  cout<<"1. CREATE FILE"<<endl;
	  cout<<"2. READ FILE"<<endl;
	  cout<<"3. SEARCH FILE"<<endl;
	  cout<<"4. UPDATE FILE"<<endl;
	  cout<<"ENTER YOUR CHOICE"<<endl;
     A:
	  cin>>ch;
	  clrscr();
	  switch(ch)
	  {
		 case 1:
			S.createfile();
			break;

		case 2:
		  S.readfile();
		  break;

		case 3:
		  S.searchfile();
		  break;

	  case 4:
		  S.updatefile();
		  break;


		default:
		cout<<"INVALID"<<endl;

	 }c=getch();

  }
 while(1);
}

