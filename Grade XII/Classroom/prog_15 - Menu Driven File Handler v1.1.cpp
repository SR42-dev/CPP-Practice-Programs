/* A menu driven program to create, read, copy a modified file to a new location and collect data */

// Not Completed/tested

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream.h>
#include <string.h>
#include <ctype.h>

void createFile() // Creates a file
{
	fstream f;
	char str[64];
	int n;
	f.open("Data.txt", ios::out);
	cout<<"Input the number of lines : ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		gets(str);
		f<<str<<"\n";
	}
	f.close();
}

void readFile() // Opens the created file
{
	char str[64], fn[16];
	fstream f;
	cout<<"Input filename :";
	gets(fn);
	cout<<endl;
	strcat(fn, ".txt");
	f.open(fn, ios::in);
	while(f)
	{
		f.getline(str, 64);
		f<<str<<"\n";
	}
	f.close();
}

void readFile1() // Reverses each line in the file
{
	fstream f;
	char str[64];
	f.open("Data.txt", ios::in);
	while(f)
	{
		f.getline(str, 64);
		strrev(str);
		cout<<str<<"\n";
	}
	f.close();
}

void readFile2() // Counts the  number of vowels in the text file
{
	fstream f;
	int count = 0;
	char str[64];
	f.open("Data.txt", ios::in);
	while(f)
	{
		f.getline(str, 64);
		for(int i = 0; i <= strlen(str); i++)
		{
			if ((str[i] == 'a') ||(str[i] == 'e') ||(str[i] == 'i') ||(str[i] == 'o') ||(str[i] == 'u') ||
				 (str[i] == 'A') ||(str[i] == 'E') ||(str[i] == 'I') ||(str[i] == 'O') ||(str[i] == 'U'))
				count++;
		}
	}
	f.close();
	cout<<"The number of vowels in the text file is : "<<count<<endl;
}

void readFile3() // Reverses each word of the text file
{
	fstream f;
	int k, l, i;
	char str[64], temp[16];
	f.open("Data.txt", ios::in);
	while(f)
	{
		f.getline(str, 64);
		l = strlen(str);
		for(i = 0; i <= l; i++)
		{
			if (str[i] != 32 && str[i] != 0)
			{
				temp[k] = str[i];
				k++;
			}

			else
			{
				temp[k] = 0;
				k = 0;
				cout<<strrev(temp)<<" ";
				strcpy(temp, "/0");
			}
		}
		cout<<endl;
	}
	f.close();
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
		cout<<"3. Vowel Count"<<endl;
		cout<<"4. Reverse Lines"<<endl;
		cout<<"5. Reverse Words"<<endl;
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
				readFile1();
				break;
			case 4 :
				readFile2();
				break;
			case 5 :
				readFile3();
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


