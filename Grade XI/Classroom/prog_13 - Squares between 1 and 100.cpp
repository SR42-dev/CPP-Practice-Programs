/* A program that prints all the perfect squares between 1 & 100 */

#include <iostream.h>
#include <math.h>

void main()
{
	double num;
	cout<<"The perfect squares between 1 & 100 are"<<endl;
	for(num=0;num<=100;num++)
	{
		if (sqrt(num)==int(sqrt(num)))
		cout<<num<<endl;
		else
      ;
	}
}