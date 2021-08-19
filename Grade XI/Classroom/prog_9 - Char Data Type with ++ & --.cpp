/* A program that demonstrates the useage of pre-fix and post-fix operators */

#include <iostream.h>
void main()
{
	char ch1='A', ch2='Z', ch3='1';
	char ch4, ch5;
	ch4=--ch2-3;
	ch5=(ch2--)-(++ch1)+ch3/2+3;
	cout<<ch1<<" "<<ch2<<" "<<ch3<<endl;
	cout<<ch4<<" "<<ch5<<endl;
}