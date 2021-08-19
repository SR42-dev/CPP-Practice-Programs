/* A program that manages library details using classes */

#include <iostream.h>
#include <stdio.h>

class library
{
	private :
		int booknum;
		int numcopy;
		char name[30];
		float unitp;
	protected :
		float calcTotal();
	public :
		void input();
		void output();
};

float library :: calcTotal()
{
	float tot;
	tot = unitp * numcopy;
	return tot;
}

void library :: input()
{
	cout<<"Input the book number and the nuumber of copies taken respectively :";
	cin>>booknum>>numcopy;
	cout<<"Input the name of the book :";
	gets(name);
	cout<<"Input the price per unit :";
	cin>>unitp;
	cout<<endl;
}

void library :: output()
{
	cout<<"The book number and the nuumber of copies taken (respectively) are :";
	cout<<booknum<<endl<<numcopy<<endl;
	cout<<"The name of the book is :";
	puts(name);
	cout<<"The price per unit :";
	cout<<unitp<<endl;
	cout<<"The total price : "<<calcTotal()<<endl;
	cout<<endl;
}

void main()
{
	library a, b, c;
	a.input();
	a.output();
   b.input();
	b.output();
	c.input();
	c.output();
}