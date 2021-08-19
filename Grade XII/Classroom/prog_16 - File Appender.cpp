/* A program to demonstrate file appending
	Execute after initialising file using prog_12 - File Handling Demonstration */


#include <stdio.h>
#include <fstream.h>

void main()
{
	fstream f;
	char str[64]; int n;
	f.open("text1.txt", ios::app); // Can substitute "Data.txt" with a string name to have user input
											 // If file doesn't exist, newfile is created as in ios::out
											 // If file exists, pointer goes to eof position and adds text
                                  // Only in fstream.h
	cout<<"Enter the number of lines :";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		gets(str);
		f<<str<<"\n";
	}
	f.close();
}
