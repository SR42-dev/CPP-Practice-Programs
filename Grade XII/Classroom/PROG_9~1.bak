/* A menu driven program to process employee records */

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int n = 3;

class employee
{
	private :
		
		int empnum;
		char empnam[32];
		float basal;
		void input();
		void output(int p);
	
	public : 
	 
		void create_array(employee E[]);
		void display_array(employee E[]);
		void modify(employee E[]);
		void search(employee E[]);
		void sort(employee E[]); 
		void insert(employee E[]);
		void del(employee E[]);
	
};

void employee :: input()
{
	cout<<"Input the employee number : ";
	cin>>empnum;
	cout<<"Input the employee name : ";
	gets(empnam);
	cout<<"Input the basic salary : ";
	cin>>basal;
}

void employee :: output(int p)
{
	gotoxy(1, p);
	cout<<empnum;
	gotoxy(15, p);
	cout<<empnam;
	gotoxy(30, p);
	cout<<basal;
}

void employee :: create_array(employee E[])
{
	cout<<"Input the details as prompted ..."<<endl;
	for(int i = 0; i < n; i++)
	{
		E[i].input();
	}
}

void employee :: display_array(employee E[])
{
	int i, r = 2;
	clrscr();
	gotoxy(1, 1);
	cout<<"Employee #";
	gotoxy(15, 1);
	cout<<"Employee Name";
	gotoxy(30, 1);
	cout<<"Salary";
	for(i = 0;i < n; i++, r++)
	{
		E[i].output(r);
	}
}

void employee :: modify(employee E[])
{
	for (int i = 0; i < n; i++)
		E[i].basal += 0.03 * E[i].basal;
}

void employee :: search(employee E[])
{
   clrscr();
	int data, up = n, pos = -1, low = 0, mid;
	cout<<"Input the search term : ";
	cin>>data;
	while (low <= up)
	{
		mid = (low + up) / 2;
		if (data == E[mid].empnum)
		{
			pos = mid;
			break;
		}
		else if (data < E[mid].empnum)
			up = mid - 1;
		else if (data > E[mid].empnum)
			up = mid + 1;
	}
	if (pos == -1)
		cout<<"Data not found!"<<endl;
	else
	{
		cout<<"Data found & displayed below ..."<<endl;
		E[pos].output(6); 
	}
}

void employee :: sort(employee E[])
{
	employee temp;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(E[i].empnum > E[j].empnum)
			{
				temp = E[i];
				E[i] = E[j];
				E[j] = temp;
			}
		}
	}
	cout<<"Sorted ..."<<endl;
}

void employee :: del(employee E[])
{
	int pos = -1, i, j;
	char data[32];
	cout<<"Input employee name : ";
	gets(data);
	for(i = 0; i < n; i++)
	{
		if(strcmpi(data, E[i].empnam) == 0)
		{
			pos = i;
			for(j = pos; j < n; j++)
				E[j] = E[j + 1];
			n--;
			i--;
		}
	}
	if(pos == -1)
		cout<<"Data not found!"<<endl;
	else 
		cout<<"Data found and deleted ..."<<endl;
}

void employee :: insert(employee E[])
{
	int pos, i;
	
	A :
		
		cout<<"Input position :"<<endl;
		cin>>pos;
		if(pos < 0 || pos > n)
		{
			cout<<"Invalid entry! Retry ..."<<endl;
			goto A;
		}
		n++;
		for(i = n; i >= pos; i--)
			E[i + 1] = E[i];
		E[pos].input();
		
	cout<<"Data inserted ..."<<endl;
}

void main()
{
	employee E[16];

	do
	{
		clrscr();
		int ch;
		
		cout<<"Menu"<<endl<<endl;
		cout<<"1. Create Array"<<endl;
		cout<<"2. Display Array"<<endl;
		cout<<"3. Modify Array"<<endl;
		cout<<"4. Search for an element"<<endl;
		cout<<"5. Sort by employee number"<<endl;
		cout<<"6. Delete Element"<<endl;
		cout<<"7. Insert Element"<<endl;
		cout<<"8. Exit"<<endl;
		
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
				E[0].modify(E);
				break;
			case 4 :
				E[0].search(E);
				break;
			case 5 :
				E[0].sort(E);
				break;
			case 6 :
				E[0].del(E);
				break;
			case 7 :
				E[0].insert(E);
				break;
			case 8 :
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
