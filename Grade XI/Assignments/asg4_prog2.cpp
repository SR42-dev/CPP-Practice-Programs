#include <iostream.h>

void main()
{
		int a[10][10], b[10][10], c[10][10], ra, ca, rb, cb, i, j, k, sum = 0;
	cout<<"Enter the desired number of columns and rows for the first matrix :"<<endl;
	cin>>ra>>ca;
	cout<<"Enter the values to be stored in the matrix :"<<endl;
	for (i=0;i<ra;i++)
		for (j=0;j<ca;j++)
			cin>>a[i][j];
	cout<<endl;
	cout<<"Enter the desired number of columns and rows for the secomd matrix :"<<endl;
	cin>>rb>>cb;
	cout<<"Enter the values to be stored in the matrix :"<<endl;
	for (i=0;i<rb;i++)
		for (j=0;j<cb;j++)
			cin>>b[i][j];
	cout<<endl;

	if (ca == rb)
	{
		 for (i=0;i<ra;i++)
		 {
			for (j=0;j<cb;j++)
			{
				for (k=0;k<rb;k++)
				{
					sum += a[i][k] * b[k][j];
				}
				c[i][j] = sum;
            sum = 0;
			}
		 }
		 for (i=0;i<ra;i++)
			{
				for (j=0;j<cb;j++)
					cout<<c[i][j]<<" ";
				cout<<endl;
			}
	}
	else
		cout<<"Matrix multiplication not possible"<<endl;
}