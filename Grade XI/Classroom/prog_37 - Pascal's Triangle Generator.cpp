/* A prograam that generates a Pascal's Triangle of a desired size */

#include "D:\M.cpp"

void main()
{
	int n,i,r;
	cout<<"Input the number of rows of the Pascal's triangle"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
		cout<<ncr(n,i)<<" ";
	for(;i>-1;i--)
		cout<<ncr(n,i)<<" ";
}

