#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct date
{
	int dd;
	int mm;
	int yy;
};

struct employee
{
	char empnum[11];
	char empnam[32];
	date datjoin;
	float basal;
	float ale;
	float ded;
	float netsal;
};

void create_array(employee a[], int n)
{
	int i;
	cout<<"You are now creating a new database. Input the required details as prompted :"<<endl<<endl;
	for (i=0;i<n;i++)
	{
		cout<<"Input the number corresponding to employee "<<(i + 1)<<" :"<<endl;
		gets(a[i].empnum);
		cout<<"Input the name of employee "<<(i + 1)<<" :"<<endl;
		gets(a[i].empnam);
		cout<<"Input the date of join of employee "<<(i + 1)<<" in dd/mm/yy format :"<<endl;
		cout<<"dd : "; cin>>a[i].datjoin.dd;
		cout<<"mm : "; cin>>a[i].datjoin.mm;
		cout<<"yy : "; cin>>a[i].datjoin.yy;
		cout<<"Input the basic salary of employee "<<(i + 1)<<" :"<<endl;
		cin>>a[i].basal;
		a[i].ale = a[i].basal * 0.5;
		a[i].ded = a[i].basal * 0.15;
		a[i].netsal = a[i].basal + a[i].ale - a[i].ded;
	}
	cout<<"Database initialisation complete..."<<endl;
}

void display_any(employee a[], int n, char empnum[])
{
	int i;
	for (i=0;i<n;i++)
	{
		if(strcmpi(a[i].empnum,empnum) == 0)
		{
			cout<<"The requested employee details are given below ..."<<endl;
			cout<<endl;
			cout<<"________________________________________________________________________________________"<<endl;
			cout<<endl;
			cout<<"Employee Number				: "; puts(a[i].empnum);
			cout<<"Employee Name 				: "; puts(a[i].empnam);
			cout<<"Date of join  				: "<<a[i].datjoin.dd<<"/"<<a[i].datjoin.mm<<"/"<<a[i].datjoin.yy<<endl;
			cout<<"Basic Salary  				: "<<a[i].basal<<endl;
			cout<<"Allowance     				: "<<a[i].ale<<endl;
			cout<<"Deduction     				: "<<a[i].ded<<endl<<endl;
			cout<<"________________________________________________________________________________________"<<endl;
			cout<<"Net Salary						: "<<a[i].netsal<<endl;
			cout<<"________________________________________________________________________________________"<<endl;
			cout<<endl;
		}
	}
}

void display_all(employee a[], int n)
{
	int i;
	clrscr();
	cout<<"All employee details will now be printed ... "<<endl<<endl;
/* for (i=0;i<n;i++)
	{
		cout<<endl;
		cout<<"________________________________________________________"<<endl;
		cout<<endl;
		cout<<"Employee Number				: "; puts(a[i].empnum);
		cout<<"Employee Name 				: "; puts(a[i].empnam);
		cout<<"Date of join  				: "<<a[i].datjoin.dd<<"/"<<a[i].datjoin.mm<<"/"<<a[i].datjoin.yy<<endl;
		cout<<"Basic Salary  				: "<<a[i].basal<<endl;
		cout<<"Allowance     				: "<<a[i].ale<<endl;
		cout<<"Deduction     				: "<<a[i].ded<<endl<<endl;
		cout<<"________________________________________________________"<<endl;
		cout<<"Net Salary						: "<<a[i].netsal<<endl;
		cout<<"________________________________________________________"<<endl;
		cout<<endl;
	} */
	gotoxy(1,1);cout<<"Employee Number";
	gotoxy(15,1);cout<<"Employee Name";
	gotoxy(35,1);cout<<"Date of join";
	gotoxy(50,1);cout<<"Basic Salary";
	gotoxy(70,1);cout<<"Net Salary";
	gotoxy(1,2);
	cout<<"____________________________________________________________________________";
	for(i=0;i<n;i++)
	{
		gotoxy(1,i+3);cout<<a[i].empnum;
		gotoxy(15,i+3);cout<<a[i].empnam;
		gotoxy(35,i+3);cout<<a[i].datjoin.dd<<"/"<<a[i].datjoin.mm<<"/"<<a[i].datjoin.yy;
		gotoxy(50,i+3);cout<<a[i].basal;
		gotoxy(70,i+3);cout<<a[i].netsal;
	}
   cout<<endl;
}

void modify(employee a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i].basal =  (a[i].basal * 0.05) + a[i].basal;
		a[i].ale = a[i].basal * 0.5;
		a[i].ded = a[i].basal * 0.15;
		a[i].netsal = a[i].basal + a[i].ale - a[i].ded;
	}
}

void main()
{
	 employee a[5];
	 int acap = 5, ch;
	 char empnum[11];
	 do
	 {
		  clrscr();
		  cout<<"Current database capacity : 5 entries (Contact the moderator for more information on this)"<<endl<<endl;
		  cout<<"Menu"<<endl<<endl;
		  cout<<"1. Data entry"<<endl;
		  cout<<"2. Display a specific entry"<<endl;
		  cout<<"3. Display all entries"<<endl;
		  cout<<"4. Modify basic salary"<<endl;
		  cout<<"5. Exit program"<<endl<<endl;
		  cout<<"Enter the number corresponding to your choice :"<<endl;
		  cin>>ch;

		  switch(ch)
		  {
				case 1:
					create_array(a, acap);
					break;
				case 2:
					cout<<"Enter the employee number of the required entry : ";
					gets(empnum);
					display_any(a, acap, empnum);
					break;
				case 3:
					display_all(a, acap);
					break;
				case 4:
					modify(a, acap);
					break;
				case 5:
					exit(0);
					break;
				default:
				cout<<"Invalid entry. Start over"<<endl;
		  }
		  cout<<"Press any key to continue..."<<endl;
		  getch();
	 }while(1);
}

