/* A program to demonstrate usage of constant data members and member functions and related errors */

#include <iostream.h>

class data
{
	private :

		const int b;
		float f;

	public :

		data const() : b(7)
		{
			f = 3.5;
		}
		data const(int a, float p) : b(a), p(f)
		{
		}

		void out() const ;
      {
			cout<<b<<" "<<f<<endl;
		}

		void funconst (data const ob1) const
		{
			f++;
			ob1.f++;
			ob1.out();
		}
};

void main()
{
	data const c1;
	data const c2(8,9.5);
	c1.out();
	c2.out();
	c1.funconst(c2)
	c1.out();
	c2.out();
}


