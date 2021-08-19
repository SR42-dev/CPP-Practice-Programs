#include<iostream.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

void mix(int A[],int B[],int C[],int ubA,int ubB,int &ubC)
{
 ubC=ubA+ubB+1;
 int i=0,j=0,k=0;
 for(i=0;i<=ubA;i++)
	{
	 if(A[i]%2==0)
		{
		 C[k]=A[i];
		 k++;
		}
	}
 for(j=0;j<=ubB;j++)
	{
	 if(B[j]%2==0)
		{
		 C[k]=B[j];
		 k++;
		}
	}
 k=ubC;
 for(i=0;i<=ubA;i++)
	{
	 if(A[i]%2==1)
		{
		 C[k]=A[i];
		 k--;
		}
	}
 for(j=0;j<=ubB;j++)
	{
	 if(B[j]%2==1)
		{
		 C[k]=B[j];
		 k--;
		}
	}
 cout<<"The resultant array is as follows : "<<endl;
 for(i=0;i<=ubC;i++)
	cout<<C[i]<<" ";
}
void merge_asc(int A[],int B[],int D[],int ubA,int ubB,int &ubD)
{
 int i,j,k,temp;
 ubD=ubA+ubB+1;
 for(i=0;i<=ubA;i++)
	{
	 for(j=i+1;j<=ubA;j++)
		if(A[j]<A[i])
		{
		 temp=A[i];
		 A[i]=A[j];
		 A[j]=temp;
		}
	}
 for(i=0;i<=ubB;i++)
	{
	 for(j=i+1;j<=ubB;j++)
		if(B[j]<B[i])
		{
		 temp=B[i];
		 B[i]=B[j];
		 B[j]=temp;
		}
	}
 i=j=k=0;
 while(i<=ubA&&j<=ubB)
	{
	 if(A[i]<=B[j])
		{
		 D[k]=A[i];
		 k++;
		 i++;
		}
	 if(A[i]>B[j])
		{
		 D[k]=B[j];
		 k++;
		 j++;
		}
	}
 while(i<=ubA)
	{
	 D[k]=A[i];
	 k++;
	 i++;
	}
 while(j<=ubB)
	{
	 D[k]=B[j];
	 k++;
	 j++;
	}
 cout<<"The resultant array is as follows : "<<endl;
 for(i=0;i<=ubD;i++)
	cout<<D[i]<<" ";
}
void main()
{
 char c;
 int A[20],B[20],C[40],D[40];
 int i,ch,ubA,ubB,ubC=0,ubD=0;
 cout<<"Enter upper bound of the arrays A and B respectively :"<<endl;
 cin>>ubA>>ubB;
 cout<<"Input the elements of array A :"<<endl;
 for(i=0;i<=ubA;i++)
	cin>>A[i];
 cout<<"Input the elements of array B : "<<endl;
 for(i=0;i<=ubB;i++)
	cin>>B[i];

 do
 {
  clrscr();

  cout<<"Menu"<<endl<<endl;
  cout<<"1. Mix"<<endl;
  cout<<"2. Merge in Ascending order"<<endl;

  cout<<"\nEnter the number corresponding to your choice : "<<endl;
  cin>>ch;

  switch(ch)
  {
	case 1:
		mix(A,B,C,ubA,ubB,ubC);
		break;
	case 2:
		merge_asc(A,B,D,ubA,ubB,ubD);
		break;
	default:
		cout<<"Invalid, try again"<<endl;
  }
  cout<<endl;
  cout<<"Press any key to continue ..."<<endl;
  c=getch();
 }while(1);
}
