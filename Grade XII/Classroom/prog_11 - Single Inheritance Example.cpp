/* A program to demonstrate single inheritance of classes */

#include <iostream.h>
#include <stdio.h>

class state
{
	protected :

		int tp;

	public :

		state() // Constructor - not inherited & executed as soon as declared in base OR derived class
		{
			tp = 0;
		}

		void inctp() // Accessor method - Allows access to protected member tp
		{
			tp++;
		}

		int gettp()
		{
			return tp;
		}
};

class district : public state // Publically deriving 'district' from base class 'state' (note syntax)
{
	private :

		char distname[50];
		long int population;

	protected :

		void dinput(); // accepts distname & population
		void doutput(); // outputs distname & population

};

void district :: dinput()
{
	inctp();
	gets (distname);
	cin>>population;
}

void district :: doutput()
{
	gettp();
	puts (distname);
	cout<<population;
}


