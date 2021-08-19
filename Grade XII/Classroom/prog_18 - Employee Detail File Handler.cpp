/* A program that manages employee details using file handling techniques */

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream.h>
#include <string.h>
#include <ctype.h>

class employee
{
	private :

		char name[32];

	public :

      int eno;
		int salary;
		void input();
		void output();
} E;

void employee :: input() // Input
{
	cout<<"Input the employee number : ";
	cin>>eno;
	cout<<"Input the employee name : ";
	gets(name);
	cout<<"Input the employee salary : ";
	cin>>salary;
}

void employee :: output() // Output
{
	cout<<"Employee number : "<<eno<<endl;
	cout<<"Employee name : "<<name<<endl;
	cout<<"Employee salary : "<<salary<<endl;
}

void createFile() // Creates a file
{
	fstream f;
	int n;
	f.open("emp.dat", ios:: out|ios::binary);
	cout<<"Input number of lines : "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		E.input();
		f.write((char*) &E, sizeof(E));
	}
	f.close();
}

void readFile() // Opens the required binary file and displays it's contents
{
	fstream f;
	char fn[16];
	cout<<"Input filename :";
	gets(fn);
	cout<<endl;
	strcat(fn, ".dat");
	f.open(fn, ios::in|ios::binary);
	while(f.read((char*)&E, sizeof(E)))
		E.output();
	f.close();
}

void copyFile() // Copies selected records from the current file to a new file
{
	fstream f1, f2;
	int chk = -1;
	f1.open("emp.dat", ios::in|ios::binary);
	f2.open("emp1.dat", ios::out|ios::binary);
	while(f1.read((char*)&E, sizeof(E)))
	{
		 if (E.salary > 5000)
		 {
			f2.write((char*)&E, sizeof(E));
			chk++;
		 }
	}
	if (chk == -1)
		cout<<"No records found ..."<<endl;
	f1.close();
	f2.close();
}

void deleteRecord()
{
	fstream f1, f2;
	int chk = -1;
	f1.open("emp.dat", ios::in|ios::binary);
	f2.open("emp1.dat", ios::out|ios::binary);
	while(f1.read((char*)&E, sizeof(E)))
	{
		 if (E.salary > 5000)
			f2.write((char*)&E, sizeof(E));
		 else
			chk++;
	}
	if (chk == -1)
		cout<<"No records found ..."<<endl;
	else
		cout<<"Record(s) deleted ..."<<endl;
	f1.close();
	f2.close();
	remove("emp.dat");
	rename("emp1.dat", "emp.dat");
}

void insertRecord()
{
	fstream f1, f2;
	employee E1;
	int chk = -1;
	f1.open("emp.dat", ios::in|ios::binary);
	f2.open("emp1.dat", ios::out|ios::binary);
	cout<<"Input the data to be inserted ..."<<endl;
	E1.input();
	while(f1.read((char*)&E, sizeof(E)))
	{
		if (E.eno > E1.eno)
		{
			f2.write((char*)&E1, sizeof(E1));
			f2.write((char*)&E, sizeof(E));
			break;
		}
		else
			f2.write((char*)&E, sizeof(E));
	}
	if (!f1.eof())
	{
		while(f1.read((char*)&E, sizeof(E)))
			f2.write((char*)&E, sizeof(E));
	}
	else
		f2.write((char*)&E1, sizeof(E1));
   f1.close();
	f2.close();
	remove("emp.dat");
	rename("emp1.dat", "emp.dat");
}

void main()
{
	do
	{
		clrscr();
		int ch;

		cout<<"Menu"<<endl<<endl;
		cout<<"1. Create File"<<endl;
		cout<<"2. Read File"<<endl;
		cout<<"3. Copy Records"<<endl;
		cout<<"4. Insert Record"<<endl;
		cout<<"5. Delete Record"<<endl;
		cout<<"6. Exit"<<endl;

		cout<<endl<<"Enter the number corresponding to the desired choice : "<<endl;
		cin>>ch;

		switch (ch)
		{
			case 1 :
				createFile();
				break;
			case 2 :
				readFile();
				break;
			case 3 :
				copyFile();
				break;
			case 4 :
				insertRecord();
				break;
			case 5 :
				deleteRecord();
				break;
			case 6 :
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





