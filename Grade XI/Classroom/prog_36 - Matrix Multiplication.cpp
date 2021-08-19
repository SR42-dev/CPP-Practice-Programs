/* A program that demonstrates multiplication of matrices */

#include<iostream.h>
#include<math.h>

void main()
{
	int A[10][10], B[10][10], C[10][10], i, j, k, s=0, p, r1, r2, c1, c2;
	cout<<"Input the rows and columns of A"<<endl;
	cin>>r1>>c1;
	cout<<"Input the rows and columns of B (Keeping rows equal to the number of columns of A)"<<endl;
	cin>>r2>>c2;

	if(c1==r2)
	{
		cout<<"Input elements of A"<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				cin>>A[i][j];
		}
		cout<<"Input elements of B"<<endl;
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				cin>>B[i][j];
		}

		for(i=0;i<r1;i++)
		{
			 for(j=0;j<c2;j++)
			 {
				s = 0;
				for(k=0;k<r2;k++)
				{
					p = A[i][k] * B[k][j];
					s += p;
				}
				C[i][j] = s;
			 }
		}

		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				cout<<C[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else
		cout<<"Invalid input of rows and columns of matrices"<<endl;
}

