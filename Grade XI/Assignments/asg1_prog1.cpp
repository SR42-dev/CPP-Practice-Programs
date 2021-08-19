#include <iostream.h>
void line()
	{
	cout<<""<<endl;
	cout<<"___________________________________________________"<<endl;
	cout<<""<<endl;
	}
void main()
{
	long double adm1;
	float avg;
	float clas1, me, mm, mp, mc, mcs;
	char sec, grad;
	line();
	cout<<"Please enter your admission number"<<endl;
	cin>>adm1;
	line();
	cout<<"Please enter your class"<<endl;
	cin>>clas1;
	line();
	cout<<"Please enter your section (in capitals)"<<endl;
	cin>>sec;
	line();
	cout<<"Please input your english marks"<<endl;
	cin>>me;
	line();
	cout<<"Please input your mathematics marks"<<endl;
	cin>>mm;
	line();
	cout<<"Please input your physics marks"<<endl;
	cin>>mp;
	line();
	cout<<"Please input your chemistry marks"<<endl;
	cin>>mc;
	line();
	cout<<"Please input your computer science marks"<<endl;
	cin>>mcs;
	line();
	avg = (me+mm+mp+mc+mcs)/5;
	if (avg>=80)
		grad = 'A';
	else if (avg>=70 && avg<80)
		grad = 'B';
	else if (avg>=60 && avg<70)
		grad = 'C';
	else if (avg<50)
		grad = 'D';
	line();
	cout<<"                National Public School"<<endl;
	cout<<"              Rajajinagar, Bangalore - 10"<<endl;
	cout<<"Marks Sheet :"<<endl;
	line();
	cout<<"Admission Number     :"<<adm1<<endl;
	cout<<"Class                :"<<clas1<<endl;
	cout<<"Section              :"<<sec<<endl;
	cout<<"Average              :"<<avg<<endl;
	cout<<"Grade                :"<<grad<<endl;
	line();
}
