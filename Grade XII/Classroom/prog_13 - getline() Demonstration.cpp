/* A program to demonstrate the usage of getline() function in file handling
	Execute after initialising file using prog_12 - File Handling Demonstration */

#include <iostream.h>
#include <fstream.h>

void main()
{
	fstream f;
	char str[64];
	f.open("text1.txt", ios::in);
	while(f)
	{
		f.getline(str, 16); // f.get(str) in pre-4.5 TCW
		cout<<str<<endl;
	}
	f.close();
}
