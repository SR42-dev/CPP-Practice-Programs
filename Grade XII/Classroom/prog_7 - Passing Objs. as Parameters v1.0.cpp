/* A program to demonstrate the passing of objects as a parameter to a member function */

#include <iostream.h>
#include <stdio.h>
#include <string.h>

class data
{
	private :

	int no;
	float f;
	char str[32];

	public :

	void init(int n, float f, char s[]);
	void output();
	void function1(data);
	data function2();
	void function3(data &D4);

};

void data :: init (int n, float f, char s[])
{
	no = n;
	data :: f = f;
	strcpy(str, s);
}

void data :: output()
{
	cout<<no<<endl;
	cout<<f<<endl;
	cout<<str<<endl;
}

void data :: function1(data D3)
{
	no++;
	strcpy(str, D3.str);
	D3.f++;
	D3.output();
}

data data :: function2()
{
	data D4;
	D4.init(3, 7.5, "Encapsulation");
	no = D4.no++;
	D4.f = ++f;
	return D4;
}

void data :: function3(data &D4)
{
	D4.init(6, 8.5, "Abstraction");
	D4.output();
	D4.no++;
	D4.f += f;
}

void main()
{
	data D1, D2;
	D1.init(3, 6.5, "Polymorphism");
	D1.output();
	D2.init(6, 9.5, "Network");
	D2.output();
	D1.function1(D2);
	D1.output();
	D2.output();
	D1.function3(D2);
	D1.output();
	D2.output();
	D2 = D1.function3(D1);
   D1.output();
	D2.output();
}
