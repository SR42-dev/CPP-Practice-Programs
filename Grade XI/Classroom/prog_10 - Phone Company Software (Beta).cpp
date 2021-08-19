/* A program that is meant to aid a hypothetical telephone company
	in its billing processes */

#include <iostream.h>

void line()
{
	cout<<""<<endl;
	cout<<"___________________________________________________"<<endl;
	cout<<""<<endl;
}

void main()
{
	long double pn;
	int numc, tot;
	char nam[256], pt, ch;
	line();
	cout<<"Please enter your name"<<endl;
	cin>>nam;
	line();
	cout<<"Please enter your phone number"<<endl;
	cin>>pn;
	line();
	cout<<"Please enter your phone type. ie.; Enter 'R' for residential and enter 'C' for commercial"<<endl;
	cin>>pt;
	line();
	cout<<"Please input the number of calls made by your number (in integers)"<<endl;
	cin>>numc;
	line();
	if (pt=='R')
		{
			if (numc<=100)
				tot=(1.5*numc);
			else
				tot=(1.5*100)+((numc-100)*2);
		}
	else if (pt=='C')
	{
		if (numc<=50)
			tot=(2*numc);
		else
			tot=(2*50)+((numc-50)*2.5);
	}
	cout<<"Kindly verify these details for us....."<<endl;
	cout<<"Customer Name              :"<<nam<<endl;
	cout<<"Phone number               :"<<pn<<endl;
	cout<<"Total number of calls made :"<<numc<<endl;
	cout<<"Total charges              :"<<tot<<endl;
	line();
	cout<<"Enter 'Y' to confirm, otherwise, enter 'N'"<<endl;
	cin>>ch;
	if (ch=='Y')
		cout<<"Thank you for co-operating with us!\n We sincerely hope you enjoyed getting scammed just as much as we enjoyed scamming you!"<<endl;
	else if (ch=='N')
		cout<<"You may think you have avoided a scam, but while we were stalling you with this bogus program, a trojan horse just took over your hard disk.\n Thank you for your banking details!"<<endl;
	line();
	cout<<"."<<endl;
	cout<<"."<<endl;
	cout<<"."<<endl;
	cout<<"."<<endl;
	cout<<"."<<endl;
	cout<<"Program Terminated"<<endl;
}
