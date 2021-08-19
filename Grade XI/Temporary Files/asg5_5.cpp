#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iomanip.h>
#include<stdlib.h>
#include<ctype.h>
int uba, ubb, ubc;
int a[20],b[20],c[20];
void ascsort(int a[], int ub)
{
	  int i, j, temp;
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
    for(i=0;i<=ub;i++)
		  cout<<a[i]<<" , ";
	 cout<<"\b\b"<<endl;
}
void mergeasc(int a[],int b[], int d[])
{
	 int i=0,j=0,k=0;
	 while(i<=uba && j<=ubb)
	 {
		  if(a[i]<=b[j])
		  {
				d[k]=a[i];
				i++;
				k++;
		  }
		  else if(a[i]>b[j])
		  {
				d[k]=b[j];
				j++;
				k++;
		  }
	 }
	 while(j<=ubb)
	 {
		  d[k]=b[j];
		  j++;
		  k++;
	 }
	 while(i<=uba)
	 {
		  d[k]=a[i];
		  i++;
		  k++;
	 }
	 for(i=0;i<=k;i++)
	 {
		  cout<<d[i]<<" ";
	 }
	 cout<<endl;
}
void mix(int a[],int b[],int c[],int uba, int ubb,int ubc)
{
	 int i, j, k=0;
	 ubc=uba+ubb+1;
	 int r=ubc;
	 for(i=0;i<=uba;i++)
	 {
		  if(a[i]%2==0)
		  {
			  c[k]=a[i];
			  k++;
		  }
	 }
	  for(j=0;j<=ubb;j++)
	 {
		  if(b[j]%2==0)
		  {
			  c[k]=b[j];
			  k++;
		  }
	 }
     for(i=0;i<=uba;i++)
	 {
		  if(a[i]%2!=0)
		  {
			  c[r]=a[i];
			  r--;
		  }
	 }
	  for(j=0;j<=ubb;j++)
	 {
		  if(b[j]%2!=0)
		  {
			  c[r]=b[j];
			  r--;
		  }
	 }
	 cout<<"array merged"<<endl;
}
void output(int a[], int ub)
{
	 for (int i=0;i<=ub;i++)
	 {
		  cout<<a[i]<<" ";
	 }
	 cout<<endl;
}







int  main()
{
	 int a[30], b[30], c[60], d[60];
	 char x;
	 int n1,n2;
	 cout<<"enter no of elements for a"<<endl;
	 cin>>n1;
	 uba=n1-1;
	 cout<<"enter elements for a"<<endl;
	 for(int i=0;i<=uba;i++)
		 cin>>a[i];
	 cout<<"enter no of elements for b"<<endl;
	 cin>>n2;
	 ubb=n2-1;
	 cout<<"enter elements for b"<<endl;
	 for( i=0;i<=ubb;i++)
		 cin>>b[i];
     ubc=ubb+uba+1;
	 do
	 {
		  clrscr();
		  int ch;
		  cout<<"menu"<<endl;

		  cout<<"1.mix"<<endl;
		  cout<<"2.sort"<<endl;
		  cout<<"3.merge"<<endl;
		  cout<<"4.output"<<endl;
		  cout<<"5.exit"<<endl;



		  cout<<"enter choice 1-5"<<endl;
		  cin>>ch;

		  switch(ch)
		  {

				case 1:
					 mix(a,b,c, uba, ubb, ubc);
					 break;



				case 2:
					 ascsort(a,uba);
					 ascsort(b,ubb);


					 break;

				case 3:
				 mergeasc(a,b,c);


					 break;
					 case 4:
						 output(c,ubc);
						 break;

				case 5:
					 exit(0);
					 break;
				default:
				cout<<"invalid"<<endl;
		  }
		  cout<<"press key to continue"<<endl;
		  x=getch();
	 }while(1);
}

