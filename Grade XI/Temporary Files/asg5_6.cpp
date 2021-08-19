#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iomanip.h>
#include<stdlib.h>
#include<ctype.h>
int ub=9;
void input1d(int a[])
{
	 int  i;
	 cout<<"enter elements of 1 d array"<<endl;
	 
	 for(i=0;i<=ub;i++)
	 {
		 cin>>a[i];
	 }
}
void init2darray(int a[], int b[][4])
{                  int k;
	 for(int i=0;i<=ub;i++)
	 {
		  a[i+1]=a[i]+a[i+1];
	 }
	  for(i=0,k=0;i<4;i++)
	 {
		 for(int j=0;j<4;j++)
		 {
			 b[i][j]=a[k];
			 k++;
		 }
	 }
	 b[2][2]=0;
    b[2][3]=0;

}
void display1d(int a[])
{
	for(int i=0;i<=ub;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void display2d(int b[][4])
{
	 for(int i=0;i<3;i++)
	 {
		 for(int j=0;j<=3;j++)
		 {
			 cout<<b[i][j]<<" ";
		 }
		 cout<<endl;
	 }
}
int  main()
{
	 int a[30], b[30][4];
	 char x;


	 do
	 {
		  clrscr();
		  int ch;
		  cout<<"menu"<<endl;
		  cout<<"1.input"<<endl;
		  cout<<"2.fill 2d"<<endl;
		  cout<<"3.display 1d"<<endl;
		  cout<<"4.display 2d"<<endl;
		  cout<<"5.exit"<<endl;



		  cout<<"enter choice 1-3"<<endl;
		  cin>>ch;

		  switch(ch)
		  {
				case 1:

						input1d(a);


					 break;
				case 2:
					 init2darray(a,b);
					 break;
				case 3:
					 display1d(a);
					 break;
				case 4:
					 display2d(b);
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



