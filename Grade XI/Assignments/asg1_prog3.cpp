#include <iostream.h>
#include <stdio.h>

void line()
{
	cout<<""<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<""<<endl;
}

void main()
{
	char cod1, nam[512];
	double rol1, dat1;
	A:
	line();
	cout<<"Enter the date in DDMMYYYY format :"<<endl;
	cin>>dat1;
	line();
	cout<<"Please enter your name :"<<endl;
	gets (nam);
	line();
	cout<<"Please enter your roll number :"<<endl;
	cin>>rol1;
	line();
	cout<<"Input your course code ('A' or 'B') :"<<endl;
	cin>>cod1;
	line();
	switch (cod1)
	{
		case 'A' : line();
					  cout<<"Date : "<<dat1<<"    DELHI PUBLIC SCHOOL"<<endl;
					  cout<<"Roll # : "<<rol1<<"  Name : "<<nam<<"  Course Code : "<<cod1<<endl;
					  line();
					  cout<<"Stationary fee : Rs 1200"<<endl;
					  cout<<"Tuition fee    : Rs 15000"<<endl;
					  cout<<"Lab fee        : Rs 1000"<<endl;
					  line();
					  cout<<"Total fee      : Rs 17200"<<endl;
					  line();
					  break;
		case 'B' : line();
					  cout<<"Date : "<<dat1<<"DELHI PUBLIC SCHOOL"<<endl;
					  cout<<"Roll # : "<<rol1<<" Name : "<<nam<<" Course Code : "<<cod1<<endl;
					  line();
					  cout<<"Stationary fee : Rs 1500"<<endl;
					  cout<<"Tuition fee    : Rs 20000"<<endl;
					  cout<<"Lab fee        : Rs 2500"<<endl;
					  line();
					  cout<<"Total fee      : Rs 24000"<<endl;
					  line();
					  break;
	  default   : cout<<"Invalid Input(s). Please start over"<<endl;
					  goto A;
					  break;
	}
}