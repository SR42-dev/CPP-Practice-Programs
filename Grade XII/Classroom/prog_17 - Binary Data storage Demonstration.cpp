/* A program to demonstrate binary file creation to store program data */

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream.h>
#include <string.h>
#include <ctype.h>

fstream f;

class student
{
	public :

		int admno;
		char name[32];
		float marks;
		void createFile();
		void readFile();
		void search();
};

void student :: createFile()
{
	student s;
	int n;
	f.open("stud.dat", ios:: out|ios::binary);
	cout<<"Input number of lines : "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Input admission number : ";
		cin>>s.admno;
		cout<<"Input name : ";
		gets(s.name);
		cout<<"Input marks : ";
		cin>>s.marks;
		f.write((char*) &s, sizeof(s));
	}
	f.close();
}

void student :: readFile()
{
	char fn[16];
	student s;
	cout<<"Input filename :";
	gets(fn);
	cout<<endl;
	strcat(fn, ".dat");
	f.open(fn, ios::in|ios::binary);
	while(f.read((char*)&s, sizeof(s)))
	{
		cout<<s.admno<<endl;
		cout<<s.name<<endl;
		cout<<s.marks<<endl;
	}
	f.close();
}

void student :: search()
{
	int searchadmno;
	fstream f1, f2;
	student s;
	int chk = -1;
	cout<<"Enter search term : ";
	cin>>searchadmno;
	f1.open("stud.dat", ios::in|ios::binary);
	f2.open("stud1.dat", ios::in|ios::binary);
	while(f1.read((char*)&s, sizeof(s)))
	{
		if(searchadmno == s.admno)
		{
			cout<<s.admno<<endl;
			cout<<s.name<<endl;
			cout<<s.marks<<endl;
			chk++;
		}
	}
	if (chk == -1)
		cout<<"No such record ...";
	f1.close();
	f2.close();
}

void main()
{
	student s;
	do
	{
		clrscr();
		int ch;

		cout<<"Menu"<<endl<<endl;
		cout<<"1. Create File"<<endl;
		cout<<"2. Read File"<<endl;
		cout<<"3. Search"<<endl;
		cout<<"4. Exit"<<endl;

		cout<<endl<<"Enter the number corresponding to the desired choice : "<<endl;
		cin>>ch;

		switch (ch)
		{
			case 1 :
				s.createFile();
				break;
			case 2 :
				s.readFile();
				break;
			case 3 :
				s.search();
				break;
			case 4 :
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
