/* A linear search of a numeric array - Demonstration */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 int arr[20],search,pos=-1,n,ub,i;
 cout<<"Enter no. of elements"<<endl;
 cin>>n;
 ub=n-1;

 for(i=0;i<=ub;i++)
	{
	 cout<<"Enter "<<(i+1)<<" th data"<<endl;
	 cin>>arr[i];
	}
 cout<<"Enter data to be searched"<<endl;
 cin>>search;

 for(i=0;i<=ub;i++)
	{
	 if(search==arr[i])
		{
		 pos=i;
		 break;
		}
	}
 cout<<"Data was found in "<<i<<" th position first"<<endl;
}
