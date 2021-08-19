#include<iostream.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include "D:\Suk10temp\Awesome\"
void swap(float &a,float &b)
{
 float temp;
 temp=a;
 a=b;
 b=temp;
}
void fun_inp(int a[],int &ub)
{
 cout<<"Enter ub"<<endl;
 cin>>ub;
 for(int i=0;i<=ub;i++)
	cin>>a[i];
}
void fun_ins(int a[],int &ub)
{
 float data;
 int pos;
 cout<<"Enter the data"<<endl;
 cin>>data;
 cout<<"Enter the position(Index number)"<<endl;
 cin>>pos;
 if(pos>ub+1)
	 cout<<"Invalid position, try again"<<endl;
 else
	{
	 for(int i=ub;i>=pos;i--)
		a[i+1]=a[i];
	 a[pos]=data;
	 ub++;
	}
}
void fun_del(int a[],int &ub)
{
 int pos=-1,j,i,data,count=0;
 cout<<"Enter the data which has to be deleted"<<endl;
 cin>>data;
 for(i=0;i<=ub;i++)
	 if(data==a[i])
		{
		 count++;
		 pos=i;
		 for(j=pos;j<=ub;j++)
			a[j]=a[j+1];
		 ub--;
		 i--;
		}
 if(count=0)
	cout<<"Data not found"<<endl;
}
void fun_rev(int a[],int ub)
{
 int i,j;
 for(i=0,j=ub;i<(ub/2);i++,j--)
	swap(a[i],a[j]);
}
void fun_dis(int a[],int ub)
{
 for(int i=0;i<=ub;i++)
	cout<<a[i]<<" ";
}

void main()
{
 int arr[10],ch;
 char c;
 int ub;

 do
 {
  clrscr();
  int n;
  cout<<"Menu"<<endl;
  cout<<"1.Input"<<endl;
  cout<<"2.Insert"<<endl;
  cout<<"3.Delete"<<endl;
  cout<<"4.Reverse"<<endl;
  cout<<"5.Display"<<endl;

  cout<<"Enter choice 1 to 5"<<endl;
  cin>>ch;

  switch(ch)
  {
	case 1:
		fun_inp(arr,ub);
		break;
	case 2:
		fun_ins(arr,ub);
		break;
	case 3:
		fun_del(arr,ub);
		break;
	case 4:
		fun_rev(arr,ub);
		break;
	case 5:
		fun_dis(arr,ub);
		break;
	default:
		cout<<"Invalid, try again"<<endl;
  }
  cout<<endl;
  cout<<"Press any key to continue"<<endl;
  c=getch();
 }while(1);
}

