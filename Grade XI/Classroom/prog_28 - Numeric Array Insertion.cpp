/* A program to demonstrate the insertion of values into a numeric array */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 int arr[20],n,i,r,v,ub;
 cout<<"Enter no.of elements, followed by data"<<endl;
 cin>>n;
 ub=n-1;
 for(i=0;i<n;i++)
	cin>>arr[i];
 cout<<"Enter insertion position (Index no. which starts from 0) followed by data to be inserted"<<endl;
 cin>>r;
 cin>>v;

 for(i=ub;i>=r;i--)
	arr[i+1]=arr[i];
 arr[r]=v;

 for(i=0;i<=n;i++)
	cout<<arr[i]<<", ";
 cout<<"\b\b is the new array"<<endl;
}

