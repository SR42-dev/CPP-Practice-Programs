/* A program that manages details of clubs */

#include <iostream.h>
#include <stdio.h>

class club
{
	private :

		int clbc;
		char clbnam[32];
		char clbinc[32];
		int numact;

	public :

		void input();
		void display();
		int check(int clbc);
};

club a[8];
int n;

void create_array()
{
	cout<<"Input details as prompted ..."<<endl;
	for (int i = 0; i < n; i++)
		a[i].input();
}

void display_details()
{
	cout<<"Details are displayed below ..."<<endl;
	for (int i = 0; i < n; i++)
		a[i].display();
}

void search()
{
	int clbc;
	cout<<"Input the club code to be indexed :";
	cin>>clbc;
	for (int i = 0; i < n; i++)
	{
		if (a[i].check(clbc) == 1)
		{
			cout<<"Club found!"<<endl;
         a[i].display();
		}
	}
}

void club :: input()
{
	cout<<"Input the club code :";
	cin>>clbc;
	cout<<"Input the club name :";
	gets(clbnam);
	cout<<"Input the name of the club-in-charge :";
	gets(clbinc);
	cout<<"Input the number of activities :";
	cin>>numact;
}

void club :: display()
{
	cout<<clbc<<endl;
	cout<<clbnam<<endl;
	cout<<clbinc<<endl;
	cout<<numact<<endl;
}

int club :: check(int clbc)
{
	if (clbc == club :: clbc)
		return 1;
	else
		return 0;
}

void main()
{
	cout<<"Input the number of records :";
	cin>>n;
	create_array();
	display_details();
	search();
}