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
	 cout<<"Input the elements of the array :"<<endl;

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
		  cout<<"Menu"<<endl<<endl;
		  cout<<"1. Input 1-D"<<endl;
		  cout<<"2. Input 2-D"<<endl;
		  cout<<"3. Display 1-D"<<endl;
		  cout<<"4. Display 2-D"<<endl;
		  cout<<"5. Exit program"<<endl<<endl;
		  cout<<"Enter the number corresponding to your choice :"<<endl;
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
				cout<<"Invalid entry. Start over"<<endl;
		  }
		  cout<<"Press any key to continue"<<endl;
		  x=getch();
	 }while(1);
}



