#include<iostream.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int ub,arr[20];

//Function 1:
void fun_lin_search()
{
 int i,search,pos = -1;
 cout<<"Enter the element to be searched"<<endl;
 cin>>search;
 cout<<"The element was :"<<endl;;
 for(i=0;i<=ub;i++)
	{
	 if(search==arr[i])
		{
		 pos=i;
		 cout<<"Found in position "<<i+1<<endl;
		}
	}
 if(pos==-1)
	cout<<"Not found"<<endl;
}

//Function 2:
void fun_bin_search()
{
 int i,search,pos=-1,low=0,up=ub,mid;
 cout<<"Enter the element to be searched"<<endl;
 cin>>search;
 while(low<=up)
 {
  mid=(low+up)/2;
  if(search==arr[mid])
	{
	 pos=mid;
	 break;
	}
  else if(search<arr[mid])
	up=mid-1;
  else if(search>arr[mid])
	low=mid+1;
 }
 if(search==arr[mid])
	cout<<"The element was found in position "<<pos+1<<endl;
 else
	cout<<"The element was not found"<<endl;
}

//Function 3:
void asc_sort()
{
 int i,j,temp;
 for(i=0;i<=ub;i++)
	{
	 for(j=i+1;j<=ub;j++)
		{
		 if(arr[i]>arr[j])
			 {
			  temp=arr[i];
			  arr[i]=arr[j];
			  arr[j]=temp;
			 }
		}
	}
 cout<<"Array sorted"<<endl;
}

//Function 4:
void shift_elem()
{
 int pos=-1,i,j,temp;
 for(i=0;i<=ub;i++)
	{
	 if(arr[i]%2==0)
		{
		 temp=arr[i];
		 pos++;
		 for(j=i;j>pos;j--)
			arr[j]=arr[j-1];
		 arr[j]=temp;
		}
	}
 cout<<"Elements shifted"<<endl;
}
//Function 5:
void fun_dis(int a[])
{
 for(int i=0;i<=ub;i++)
	cout<<a[i]<<" ";
}
void main()
{
 int ch;
 char c;
 int i;

 cout<<"Enter the upperbound of the array"<<endl;
 cin>>ub;
 cout<<"Enter the elements of the array"<<endl;
 for(i=0;i<=ub;i++)
	cin>>arr[i];
 do
 {
  clrscr();
  int n;
  char c;

  cout<<"Menu"<<endl;
  cout<<"1.Linear search"<<endl;
  cout<<"2.Binary search"<<endl;
  cout<<"3.Ascending sorting"<<endl;
  cout<<"4.Shifting elements"<<endl;
  cout<<"5.Display"<<endl;

  cout<<"\nEnter choice 1 to 5"<<endl;
  cin>>ch;

  switch(ch)
  {
	case 1:
		fun_lin_search();
		break;
	case 2:
		fun_bin_search();
		break;
	case 3:
		asc_sort();
		break;
	case 4:
		shift_elem();
		break;
	case 5:
		fun_dis(arr);
		break;
	default:
		cout<<"Invalid, try again"<<endl;
  }
  cout<<endl;
  cout<<"Press any key to continue"<<endl;
  c=getch();
 }while(1);
}
