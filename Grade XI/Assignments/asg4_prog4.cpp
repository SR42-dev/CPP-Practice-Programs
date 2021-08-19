#include <iostream.h>

void main()
{
 int a[10][10],r,c,i,j,prod=1,sum=0;
 cout<<"Enter the number of columns and rows"<<endl;
 cin>>r>>c;
 cout<<"enter values to be stored"<<endl;
 for (i=0;i<r;i++)
	for(j=0;j<c;j++)
		cin>>a[i][j];
 cout<<endl;

