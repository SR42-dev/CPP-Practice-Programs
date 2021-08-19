#include <string.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fstream.h>

class FAST_TECH
{
  int prod_code,qty,unitp;
  char coname[20],type[20];
  double tot_amt;
  double dis; double net_amt;

  double calculate()
  {
	 if(qty>=20 && qty<50)
		dis=0.1*tot_amt;
	 else if(qty>=50)
		dis=0.15*tot_amt;
	 else if(qty<20)
		dis=0;
    tot_amt=qty*unitp;
	 net_amt=tot_amt-dis;
	 return dis;


  }

  void inputdata()
  {
	 cout<<"ENTER PRODUCT CODE"<<endl;
	 cin>>prod_code;
	 cout<<"ENTER COMPANY NAME"<<endl;
	 gets(coname);
	 cout<<"ENTER TYPE"<<endl;
	 gets(type);
	 cout<<"ENTER QUANTITY"<<endl;
	 cin>>qty;
	 cout<<"ENTER UNIT PRICE"<<endl;
	 cin>>unitp;
    calculate();
  }

 void display_details(int r)
 {
	 gotoxy(1,r); cout<<prod_code<<endl;
	 gotoxy(10,r); cout<<coname<<endl;
	 gotoxy(25,r); cout<<type<<endl;
	 gotoxy(45,r); cout<<net_amt<<endl;
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
	 H.inputdata();
	 f.write((char*)&H , sizeof(H));
  }
  f.close();
}

 void read_file()
{
  fstream f;
  FAST_TECH H;
  int r=3;
  f.open("prod.dat",ios::in|ios::binary);
  gotoxy(1,1); cout<<"P-Code"<<endl;
  gotoxy(10,1); cout<<"Name"<<endl;
  gotoxy(20,1); cout<<"Type"<<endl;
  gotoxy(30,1); cout<<"Net Amt"<<endl;
  while(f.read((char*)&H , sizeof(H)))
  {
	  H.display_details(r);
	  r++;
  }
  f.close();
}

void read_any()
{

  fstream f;
  FAST_TECH H;
  int pcode;
  cout<<"ENTER PRODUCT CODE TO BE SEARCHED"<<endl;
  cin>>pcode;
  f.open("prod.dat",ios::in|ios::binary);
  while(f.read((char*)&H , sizeof(H)))
  {
	  if(H.prod_code==pcode)
	  {
		cout<<"COMPANY NAME  : "<<coname<<endl;
		cout<<"PRODUCT CODE  : "<<prod_code<<endl;
		cout<<"PRODUCT TYPE  : "<<type<<endl;
		cout<<"UNIT PRICE    : "<<unitp<<endl;
		cout<<"QUANTITY PURCHASED"<<qty<<endl;
		cout<<"TOTAL PRICE   : "<<tot_amt<<endl;
		cout<<"DISCOUNT      : "<<dis<<endl;
		cout<<endl;
		cout<<"_______________________________________________________________________________________"<<endl;
		cout<<"NET PRICE   : "<<net_amt<<endl;
		cout<<endl;
		cout<<"_______________________________________________________________________________________"<<endl;
	  }
  }
  f.close();
}

void insertfile()
{
  fstream f2,f1;
  FAST_TECH H1,H;
  f1.open("prod.dat",ios::in|ios::binary);
  f2.open("prod1.dat",ios::in|ios::binary);
  cout<<"ENTER DATA TO BE INSERTED"<<endl;
  H1.inputdata();
  while(f1.read((char*)&H , sizeof(H)))
  {
	  if(strcmpi(H.coname,H1.coname)>1)
	  {
		 f2.write((char*)&H1 , sizeof(H1));
		 f2.write((char*)&H , sizeof(H));
		 break;
	  }
	  else
	  f2.write((char*)&H , sizeof(H));
  }
  if(!f1.eof())
	 while (f1.read((char*)&H , sizeof(H)))
		f2.write((char*)&H , sizeof(H));
 else
	  f2.write((char*)&H1 , sizeof(H1));
 f1.close();
 f2.close();
 remove("prod.dat");
 rename("prod1.dat" , "prod.dat");
}
};

void main()
 {
	int ch,c;
	FAST_TECH H;
	do
	{
	  clrscr();
	  cout<<"MENU"<<endl;
	  cout<<"1. CREATE FILE"<<endl;
	  cout<<"2. READ FILE"<<endl;
	  cout<<"3. READ ANY"<<endl;
	  cout<<"4. INSERT FILE"<<endl;
	  cout<<"ENTER YOUR CHOICE"<<endl;
     A:
	  cin>>ch;
	  clrscr();
	  switch(ch)
	  {
		 case 1:
			H.create_file();
			break;

		case 2:
		  H.read_file();
		  break;

		case 3:
		  H.read_any();
		  break;

	  case 4:
		  H.insertfile();
		  break;


		default:
		cout<<"INVALID"<<endl;

	 }c=getch();

  }
 while(1);
}











