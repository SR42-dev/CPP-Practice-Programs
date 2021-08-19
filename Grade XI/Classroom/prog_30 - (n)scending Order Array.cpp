/* A program that finds the largest, next largest, smallest & the next
	smallest numbers in a numeric array by assorting the array into an ascending
	/descending array */

#include <iostream.h>
#include <stdio.h>

void main()
{
	int a[4];
	int i, j, temp;
	cout<<"Enter the values into the array as prompted :"<<endl;
	for (i=0;i<4;i++)
		cin>>a[i];
	cout<<endl;
	for (i=0;i<4;i++)
	{
		for (j=i+1;j<4;j++)
		{
			if (a[i]<a[j]) // If '<' is replaced with '>' => Ascending order
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i=0;i<4;i++)
		cout<<a[i]<<", ";
	cout<<"\b\b"<<endl;
	cout<<endl;
	cout<<"Therefore, the largest value in the array is : "<<a[0]<<endl;
	cout<<"Therefore, the next largest value in the array is : "<<a[1]<<endl;
	cout<<"Therefore, the smallest value in the array is : "<<a[3]<<endl;
	cout<<"Therefore, the next smallest value in the array is : "<<a[2]<<endl;
}