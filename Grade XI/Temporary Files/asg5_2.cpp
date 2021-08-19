#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iomanip.h>
#include<stdlib.h>
int a[10]={55,19,34,78,19,12,21}, ub=6;
void fun_linsrch()
{
	 int  search, pos=-1;
	 int  i;


	 cout<<"enter data to be searched"<<endl;
		cin>>search;
	 for(i=0;i<=ub;i++)
	 {
		 if(search==a[i])
		 {
			 pos=i;
			 break;
		 }
	 }
	 if (pos==-1)
		cout<<"data not found"<<endl;
	 else
		cout<<search<<" found in "<<pos<<endl;
}
void fun_binsrch()
{

	  int    low=0, up, mid, data, pos=-1;
	  up=ub;

	  cout<<"enter data "<<endl;
			cin>>data;
	  while(low<=up)
	  {
			 mid=(low+up)/2;

			 if (data==a[mid])
			 {
				  pos=mid;
				  break;
			 }
			 else if(data<a[mid])
				  up=mid-1;
			 else if(data>a[mid])
				  low=mid+1;
	  }
	  if(pos==-1)
		  cout<<"data not found"<<endl;
	  else
		  cout<<"data found in "<<pos<<endl;
}
void asc_sort()
{
	 int  i, j, temp;



	 for(i=0;i<=ub;i++)
	 {
		  for(j=i+1;j<=ub;j++)
		  {
				if(a[i]>a[j])
				{
					  temp=a[i];
					  a[i]=a[j];
					  a[j]=temp;
				}
		  }
	 }
	 cout<<"array sorted"<<endl;
}
void shift_elem()
{
	 int i, j, temp, up, low=0;
	 for(i=0;i<=ub;i++)
	 {
		 if(a[i]%2==0)
		 {
			  temp=a[i];
			  up=i;
			  for(j=up;j>low;j--)
			  {
					a[j]=a[j-1];
			  }
			  a[low]=temp;
			  low++;
		 }
	 }
	 
	 cout<<"elements shifted"<<endl;
}
void fun_disp()
{
	 int i;
	 for(i=0;i<=ub;i++)
		 cout<<a[i]<<" ";
	 cout<<endl;
}
int main()
{

	 char c;
	 int ub;

	 do
	 {
		  clrscr();
		  int ch;
		  cout<<"menu"<<endl;
		  cout<<"1.search"<<endl;
		  cout<<"2.binary search"<<endl;
		  cout<<"3.sort"<<endl;
		  cout<<"4.display"<<endl;
		  cout<<"5.shift"<<endl;
		  cout<<"6.exit"<<endl;

		  cout<<"enter choice 1-6"<<endl;
		  cin>>ch;

		  switch(ch)
		  {
				case 1:
					 fun_linsrch();
					 break;
				case 2:
					 fun_binsrch();
					 break;
				case 3:
					 asc_sort();
					 break;
				case 4:
					 fun_disp();
					 break;
				case 5:
					 shift_elem();
					 break;
				case 6:
					 exit(0);
					 break;
				default:
				cout<<"invalid"<<endl;
		  }
		  cout<<"press key to continue"<<endl;
		  c=getch();
	 }while(1);
}



