/* Assignment 2 Program 1 */

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int n = 4;

class policy
{
	private :

		unsigned long int polnum;
		char polnam[32];
		float depamt;
		int per;
		float prem;
		void inputData();
		void outputData(int p);
		void calculate();

	public :

		void create_array(policy E[]);
		void display_array(policy E[]);
		void search(policy E[]);
		void sort(policy E[]);

} E[8];

void policy :: calculate()
{
	if ((depamt < 25000) && (per < 5))
		prem = depamt * 0.1;
	else if ((depamt < 25000) && (per >= 5))
		prem = depamt * 0.12;
	else if ((depamt >= 25000) && (per < 10))
		prem = depamt * 0.15;
	else if ((depamt < 25000) && (per >= 10))
		prem = depamt * 0.2;
	depamt += prem;
}

void policy :: inputData()
{
	cout<<"Input the policy number : ";
	cin>>polnum;
	cout<<"Input the policy name : ";
	gets(polnam);
	cout<<"Input the deposit amount : ";
	cin>>depamt;
	cout<<"Input the period : ";
	cin>>per;
	calculate();
}

void policy :: outputData(int p)
{
	gotoxy(1, p);
	cout<<polnum;
	gotoxy(15, p);
	cout<<polnam;
	gotoxy(30, p);
	cout<<depamt;
	gotoxy(45, p);
	cout<<per;
}

void policy :: create_array(policy E[])
{
	cout<<"Input the details as prompted ..."<<endl;
	for(int i = 0; i < n; i++)
	{
		E[i].inputData();
	}
}

void policy :: display_array(policy E[])
{
	int i, r = 2;
	clrscr();
	gotoxy(1, 1);
	cout<<"Policy #";
	gotoxy(15, 1);
	cout<<"Policy Name";
	gotoxy(30, 1);
	cout<<"Deposit Amount";
	gotoxy(45, 1);
	cout<<"Period";
	for(i = 0;i < n; i++, r++)
	{
		E[i].outputData(r);
	}
}


void policy :: search(policy E[])
{
	clrscr();
	unsigned long int data, up = n-1, pos = -1, low = 0, mid;
	cout<<"Input the search term : ";
	cin>>data;
	while (low <= up)
	{
		mid = (low + up) / 2;
		if (data == E[mid].polnum)
		{
			clrscr();
			pos = mid;
			cout<<"Data found & displayed below ..."<<endl;
			E[pos].outputData(6);
			break;
		}
		if (data < E[mid].polnum)
			low = mid - 1;
		if (data > E[mid].polnum)
			up = mid + 1;
	}
	if (pos == -1)
		cout<<"Data not found!"<<endl;
}


void policy :: sort(policy E[])
{
	policy temp;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(E[i].polnum > E[j].polnum)
			{
				temp = E[i];
				E[i] = E[j];
				E[j] = temp;
			}
		}
	}
	cout<<"Sorted ..."<<endl;
}

void main()
{
	policy E[16];

	do
	{
		clrscr();
		int ch;

		cout<<"Menu"<<endl<<endl;
		cout<<"1. Create Array"<<endl;
		cout<<"2. Display Array"<<endl;
		cout<<"3. Search for an element"<<endl;
		cout<<"4. Sort by policy number"<<endl;
		cout<<"5. Exit"<<endl;

		cout<<endl<<"Enter the number corresponding to the desired choice : "<<endl;
		cin>>ch;

		switch (ch)
		{
			case 1 :
				E[0].create_array(E);
				break;
			case 2 :
				E[0].display_array(E);
				break;
			case 3 :
				E[0].search(E);
				break;
			case 4 :
				E[0].sort(E);
				break;
			case 5 :
				exit(0);
				break;
			default :
				cout<<"Invalid entry. Retry ..."<<endl;
		}
	cout<<endl;
	cout<<"Press any key to continue ..."<<endl;
	getch();
	}while(1);
}
