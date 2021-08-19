#include<iostream.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int ub;

void input(float mks[])
{
 int i;
 for(i=0;i<=ub;i++)
	cin>>mks[i];
}
float max(float mks[])
{
 int i;
 float max=mks[0];
 for(i=0;i<=ub;i++)
	{
	 if(mks[i]>max)
		max=mks[i];
	}
 return max;
}
float secmax(float mks[])
{
 int i;
 float maxi=mks[0],secmaxi=mks[0];
 maxi=max(mks);
 for(i=0;i<=ub;i++)
	{
	 if(mks[i]!= maxi)
	 {	secmaxi=mks[i]; break;}
	}
 for(i=0;i<=ub;i++)
	{
	 if(mks[i] >= secmaxi&&mks[i]<maxi)
		secmaxi=mks[i];
	}
 return secmaxi;
}
float avg(float mks[])
{
 int i;
 float avg,tot=0;
 for(i=0;i<=ub;i++)
	tot+=mks[i];
 avg=tot/(ub+1);
 return avg;
}
void output(float mks[])
{
 int i;
 float avge;
 avge=avg(mks);
 cout<<"The marks greater than the average are ";
 for(i=0;i<=ub;i++)
	if(mks[i]>avge)
		cout<<mks[i]<<", ";
 cout<<"\b\b"<<endl;
}
void main()
{
 float mks[10];
 char c;
 int i,ch;

 cout<<"Enter the upperbound of the array"<<endl;
 cin>>ub;
 //cout<<"Enter the elements of the array"<<endl;
 //for(i=0;i<=ub;i++)
 //	cin>>mks[i];
 do
 {
  clrscr();
  int n;
  char c;

  cout<<"Menu"<<endl;
  cout<<"1.Input"<<endl;
  cout<<"2.Max score"<<endl;
  cout<<"3.Second Max score"<<endl;
  cout<<"4.Average"<<endl;
  cout<<"5.Output"<<endl;

  cout<<"\nEnter vthe number corresponding to your choice :"<<endl;
  cin>>ch;

  switch(ch)
  {
	case 1:
		input(mks);
		break;
	case 2:
		cout<<max(mks);
		break;
	case 3:
		cout<<secmax(mks);
		break;
	case 4:
		cout<<avg(mks);
		break;
	case 5:
		output(mks);
		break;
	default:
		cout<<"Invalid, try again"<<endl;
  }
  cout<<endl;
  cout<<"Press any key to continue"<<endl;
  c=getch();
 }while(1);
}


