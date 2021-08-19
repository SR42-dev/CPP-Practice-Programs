#include<iostream.h>
void line()
{
}

void main()
{
	long double dat, bnum, cnum;
	double tot, num;
	line();
	cout<<"Please enter your consumer number"<<endl;
	cin>>cnum;
	line();
	cout<<"Please enter the date in DDMMYYYY format"<<endl;
	cin>>dat;
	line();
	cout<<"Please enter your bill number"<<endl;
	cin>>bnum;
	line();
	cout<<"Please input your consumption (In units)"<<endl;
	cin>>num;
	line();
	if (num<=100)
		tot = num*2.5+75;
	else if (num>100 && num<=200)
		tot = (100*2.5)+((num-100)*3.5)+75;
	else if (num>200)
		tot = (100*2.5)+(100*3.5)+((num-200)*5)+75;
	line();
	cout<<"		  Bangalore Electricity Board"<<endl;
	cout<<"Date : "<<dat<<"					Bill No. : "<<bnum<<endl;
	cout<<"Consumer Number :"<<cnum<<endl;
	line();
	cout<<"No. of units consumed        :"<<num<<endl;
	cout<<"Total Charge                 :"<<tot<<endl;
	line();
}


