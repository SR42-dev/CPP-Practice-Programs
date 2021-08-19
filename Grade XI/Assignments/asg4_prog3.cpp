#include <iostream.h>

void main()
{
 int a[10][10],r,c,i,j,max,min,m=0,n=0,s,b;
 cout<<"Enter the number of columns and rows"<<endl;
 cin>>r>>c;
 cout<<"enter values to be stored"<<endl;
 for (i=0;i<r;i++)
	for(j=0;j<c;j++)
		cin>>a[i][j];
 cout<<endl;
 max=a[0][0];
 min=a[0][0];
 for (i=0;i<r;i++)
 {
	for(j=0;j<c;j++)
	{
		if(a[i][j]>max)
			{
				max=a[i][j];
				m=i;
				n=j;
			}
		else if(a[i][j]<min)
			{
				min=a[i][j];
				s=i;
				b=j;
			}
	}
 }

 for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
 cout<<"The largest number is "<<max<<" in row "<<m+1<<" and column "<<n+1<<endl;
 cout<<"The smallest number is "<<min<<" in row "<<s+1<<" and column "<<b+1<<endl;
}




