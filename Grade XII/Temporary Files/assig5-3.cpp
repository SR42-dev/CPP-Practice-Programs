#include <string.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fstream.h>

class BANK
{
  int amt=0,current=1000;
  char accno[20], name[20], type[20];

  void inputdata()
  {
	 cout<<"ENTER ACCOUNT NUMBER"<<endl;
	 gets(accno);
	 cout<<"ENTER NAME"<<endl;
	 gets(name);
	 cout<<"ENTER CURRENT BALANCE"<<endl;
	 cin>>current;
  }

  void display_details(int r)
 {
	 gotoxy(1,r); cout<<accno<<endl;
	 gotoxy(10,r); cout<<name<<endl;
	 gotoxy(25,r); cout<<type<<endl;
	 gotoxy(35,r); cout<<amt<<endl;
	 gotoxy(45,r); cout<<current<<endl;
  }

 

public:

 void create_file()
 {
  fstream f;
  FAST_TECH H;
  f.open("prod.dat",ios::out|ios::binary);
  int N;
  cout<<"ENTER NUMBER OF RECORDS IN ALPHABETICAL ORDER OF COMPANY"<<endl;
  cin>>N;
  for(int i=0; i<N; i++)
  {
	 inputdata();
	 f.write((char*)&H , sizeof(H));
  }
  f.close();
}
