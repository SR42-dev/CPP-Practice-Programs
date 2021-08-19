/* Assignment 2 Program 2 */

#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

int n = 5;
void line()
{
	cout<<"_________________________________________________________________"<<endl;
}

class bank
{
	private :

		char acc_no[20];
		char name[25];
		float cur_bal;
		float interest;
		void calc_interest(bank b[],int n);
		void input();
		void output(int p);

	public:

		bank();
		void create_array(bank B[], int &n);
		void display_array(bank B[], int n);
		void add_account(bank B[], int &n);
		void del_account(bank B[], int &n);
		void out(bank B);
		void display_any(bank B[], int n);

};


void bank :: calc_interest(bank b[],int n)
{
	for(int i = 0; i < n; i++)
		b[i].interest = 0.1 * b[i].cur_bal;
}

void bank :: input()
{
	cout<<"Input Account number : ";
	gets(acc_no);
	cout<<"Input name : ";
	gets(name);
	cout<<"Input the current balance : ";
	cin>>cur_bal;
}

void bank :: output(int p)
{
	gotoxy(1,p);
	cout<<name;
	gotoxy(15,p);
	cout<<acc_no;
	gotoxy(30,p);
	cout<<cur_bal;
	gotoxy(45,p);
	cout<<interest;
}

bank :: bank()
{
	strcpy(acc_no,"NULL");
	strcpy(name,"NULL");
	cur_bal=0;
	interest=0;
}

void bank :: create_array(bank B[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		B[i].input();
		calc_interest(B,n);
	}
}

void bank :: display_array(bank B[], int n)
{
	clrscr();
	gotoxy(1,2);
	cout<<"Account #";
	gotoxy(15,2);
	cout<<"Name";
	gotoxy(30,2);
	cout<<"Cur_Balance";

	int r=3;

	for(int i=0;i<n;i++)
	{
			B[i].output(r);
			r = r + 2;
	}
}

void bank :: add_account(bank B[], int &n)
{
	int pos=-1,i;
	cout<<"Input the position of insertion : ";
	cin>>pos;
	for(i=n;i>=pos;i--)
		B[i+1]=B[i];

	n++;
	B[pos].input();
	cout<<"Data inserted ..."<<endl;
}


void bank :: del_account(bank B[], int &n)
{
	int pos = -1, i;
	char data[25];
	cout<<"Input the account number of the record to be deleted : ";
	gets(data);
	for(i = 0; i < n; i++)
	{
		if(strcmpi(B[i].acc_no,data) == 0)
		{
			pos = i;
			for(int j = pos; j < n; j++)
				B[j]=B[j+1];
			n--;
		}
	}
	if (pos != -1)
		cout<<"Data deleted ..."<<endl;
	if(pos == -1)
		cout<<"Data not found!"<<endl;
}

void bank :: out(bank B)
{
	cout<<"				Customer's Account Details"<<endl;
	line();
	cout<<"Account no : "<<B.acc_no<<endl;
	cout<<"Name       : "<<B.name<<endl;
	cout<<"Cur_Balance: "<<B.cur_bal<<endl;
	cout<<"Interest   : "<<B.interest<<endl;
	line();
}

void bank :: display_any(bank B[], int n)
{
	int pos = -1 , i;
	char data[25];
	cout<<"Input the account number to be searched for : ";
	gets(data);
	for(i=0;i<n;i++)
	{
		if(strcmpi(B[i].acc_no,data)==0)
			out(B[i]);
	}
}

void main()
{
	bank E[10];
	int ch;
	do
	{
		clrscr();
		cout<<"MENU"<<endl<<endl;
		cout<<"1. Create Array"<<endl;
		cout<<"2. Display Array"<<endl;
		cout<<"3. Display Record"<<endl;
		cout<<"4. Delete Record"<<endl;
		cout<<"5. Insert Record"<<endl<<endl;
		cout<<"Enter the number corresponding to your choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				E[1].create_array(E,n);
				break;
			case 2:
				E[1].display_array(E,n);
				break;
			case 3:
				E[1].display_any(E,n);
				break;
			case 4:
				E[1].del_account(E,n);
				break;
			case 5:
				E[1].add_account(E,n);
				break;
			default:
				cout<<"Invalid choice. Try again ..."<<endl;
				break;
		}

		cout<<endl;
		cout<<"Press any key to continue ..."<<endl;
		getch();
	}while(1);
}







