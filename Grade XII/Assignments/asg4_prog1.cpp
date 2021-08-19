/* Assignment 4 Program 1 */

// Not Complete - Create array of class,

#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <fstream.h>

class text
{
	private :

		char str[64];

	public :

		void createFile();
		void readFile();
		void readFile_vowel();
		void reverseDisplay();
		void copyFile();
};

void text :: createFile()
{
	fstream f;
	char str[64]; int n;
	f.open("Data.txt", ios::out); // Can substitute "Data.txt" with a string name to have user input
   cout<<"Enter the number of lines :";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		gets(str);
		f<<str<<"\n";
	}
	f.close();
}

void text :: readFile()
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

void text :: readFile_vowel() // Counts the  number of vowels in the text file
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

void text :: reverseDisplay() // Reverses each line in the file
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

void copyFile()
{
	fstream f1, f2;
	char fn[16], str[64];
	f1.open("Data.txt", ios::in);
	f2.open("Temp.txt", ios::in);
	while(f1)
	{
		 f1.getline(str, 64);
		 for(int i = 0; i < strlen(str); i++)
		 {
			if (isupper(str[i]))
				str[i] -= 32;
			else if (islower(str[i]))
				str[i] += 32;
			else ;
		 }
		 f2<<str<<"\n";
	}
	f1.close();
	f2.close();
}

void main()
{
	text A[3];
	do
	{
		clrscr();
		int ch;

		cout<<"Menu"<<endl<<endl;
		cout<<"1. Create File"<<endl;
		cout<<"2. Read File"<<endl;
		cout<<"3. Vowel Count"<<endl;
		cout<<"4. Reverse Display"<<endl;
		cout<<"5. Copy File"<<endl;
		cout<<"6. Exit"<<endl;

		cout<<endl<<"Enter the number corresponding to the desired choice : "<<endl;
		cin>>ch;

		switch (ch)
		{
			case 1 :
				A[i].createFile(); // Continue from here
				break;
			case 2 :
				readFile();
				break;
			case 3 :
				readFile_vowel();
				break;
			case 4 :
				reverseDisplay();
				break;
			case 5 :
				copyFile();
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

