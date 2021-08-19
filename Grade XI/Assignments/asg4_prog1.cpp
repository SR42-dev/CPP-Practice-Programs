#include <iostream.h>

void main()
{
	int a[10][10],r, c, i, j, prod1 = 1, sum1 = 0;
	cout<<"Enter the desired number of columns and rows :"<<endl;
	cin>>r>>c;
	cout<<"Enter the values to be stored in the matrix :"<<endl;
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			cin>>a[i][j];
	cout<<endl;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (i==j)
			{
				cout<<a[i][j]<<" ";
				sum1 = sum1 + a[i][j];
			}
			else if ((i+j)==(r-1))
			{
				cout<<a[i][j]<<" ";
				sum1 = sum1 + a[i][j];
			}
			else
				cout<<"  ";
			if ((i!=j)&&((i+j)!=(r-1)))
			{
				prod1 = prod1 * a[i][j];
			}
		}
		cout<<endl;
	}
	sum1 = sum1 + a[(r-1)/2][(c-1)/2];
	cout<<endl;
	cout<<"Therefore, the sum of the diagonal elements is : "<<sum1<<endl;
	cout<<"Therefore, the product of the diagonal elements is : "<<prod1<<endl;
}