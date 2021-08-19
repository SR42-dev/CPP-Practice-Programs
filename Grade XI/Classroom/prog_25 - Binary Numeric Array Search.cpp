/* A binary search of a numeric array - Demonstration */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 int arr[20]={10,15,18,20,25,31,35,38,40},data,pos=-1,n,ub=8,up=8,mid,low=0;

 cout<<"Enter data to be searched"<<endl;
 cin>>data;

 while(low<=up)
	{
	 mid=(low+up)/2;
	 if(data==arr[mid])
		{
		 pos=mid;
		 break;
		}
	 else if(data<arr[mid])
		up=mid-1;
	 else if(data>arr[mid])
		low=mid+1;
	}
 if (pos==-1)
	cout<<"Data not found"<<endl;
 else
	cout<<"Data was found in "<<mid<<" th position first"<<endl;
}


