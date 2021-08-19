/* A master header file that can be included and who's functions are
	consistently used in every other program */

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void inp1Dchararr(char a[], int ub) // Takes the input for a 1-D char array
// Array, array capacity in blocks
{
	int i;
	for(i=0;i<ub;i++)
		cin>>a[i];
}

void inp2Dchararr(char a[][32], int numwor) /* Takes the input for a 2-D char
															  array */
// Array, array capacity in rows
{
	int i;
	for(i=0;i<numwor;i++)
		gets(a[i]);
}

void outp1Dchararrvert(char a[]) // Vertically outputs a 1-D char array
// Array
{
	int i;
	for(i=0;a[i]!=0;i++)
		cout<<a[i]<<endl;
}

void outp2Dchararrvert(char a[][32], int numwor) /* Vertically outputs a 2-D
																	 char array */
// Array, array capacity in rows
{
	int i, j;
	for(i=0;i<=numwor;i++)
		for(j=0;a[i][j]!=0;j++)
			cout<<a[i][j]<<endl;
}

void outp1Dchararrhor(char a[]) // Horizontally outputs a 1-D char array
// Array
{
	int i;
	for(i=0;a[i]!=0;i++)
		cout<<a[i]<<" ";
}
void outp2Dchararrhor(char a[][32], int numwor) /* Horizontally outputs a 2-D
																	char array */
// Array, array capacity in rows
{
	int i, j;
	for(i=0;i<=numwor;i++)
		for(j=0;a[i][j]!=0;j++)
			cout<<a[i][j]<<" ";
}

void inp1Dintarr(int a[], int n) // Takes the input for a 1-D int array
// Array, number of elements
{
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
}

void inp2Dintarr(int a[][32], int r, int c) /* Takes the input for a 2-D int
															  array */
// Array, array capacity in rows, same in columns
{
	int i, j;
	for(i=0;i<r;i++)
		for(i=0;i<c;i++)
			cin>>a[i][j];
}

int isamp(int n, int m) /* Amicable pair - A pair of numbers where the sum of
									the factors of one number is equal to the second
									number and vice versa*/
// Number 1, number 2
{
	int i, s = 0, sn = 0;
	for(i=1;i<=n/2;i++)
		if (n % i == 0)
			s+=i;
	for(i=1;i<=m/2;i++)
		if (m % i == 0)
			sn+=i;
	if ((sn == n) && (sn == m))
		return 1;
	else
		return 0;
}

int isprime(int num) // A function that checks if a number is prime
// Number
{
	int i, chk = 1, mod;
	for (i=0;i<=sqrt(num);i++)
	{
		mod = num % i;
		if (mod == 0)
			{
				chk = 0;
				break;
			}
		else
			chk = 1;
	}
	return chk;
}

int gcd(int a, int b) /* A function that finds the highest common factor of
								 two numbers */
// Number 1, number 2
{
	int gcd, num, i;
	if (a > b)
		b = num;
	else if (a > b)
		a = num;
	else if (a == b)
		gcd = a;
	for (i=0;i<=num;i++)
		if ((a % i == 0) && (b % i == 0))
		{	gcd = i;
			break;
		}
	return gcd;
}

void line() // A function that provides easy output indentation
{
	cout<<endl;
	cout<<"_________________________________________________________"<<endl;
	cout<<endl;
}

void intarrasc(int a[], int r) /* A function that sorts int arrays in ascending
											 order */
// Array, array capacity
{
	int i, j, temp;
	for (i=0;i<r;i++)
	{
		for (j=i+1;j<r;j++)
		{	
			if (a[i]<a[j]) // If '<' is replaced with '>' => Ascending order
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void intarrdesc(int a[], int r) /* A function that sorts int arrays in
											  descending order */
// Array, array capacity
{
	int i, j, temp;
	for (i=0;i<r;i++)
	{
		for (j=i+1;j<r;j++)
		{
			if (a[i]>a[j]) // If '>' is replaced with '<' => Descending order
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void ins1Dintarr(int a[], int &n, int data, int r) /* A function that inserts
																	  int type data into an int
																	  array */
// Array, array capacity, data to be inserted, location to be inserted in
{
	int i, ub;
	ub = n - 1;
	for(i=ub;i>=r;i--)
		a[i+1]=a[i];
	a[r] = data;
	n++;
}

void ins1Dchararr(char a[], int n, char data, int r) /* A function that inserts
																	  char type data into an char
																	  array */
// Array, array capacity, data to be inserted, location to be inserted in
{
	int i, ub;
	ub = n - 1;
	for(i=ub;i>=r;i--)
		a[i+1]=a[i];
	a[r] = data;
}

void del1Dintarr(int a[], int &n, int data) /* A function that deletes
															 int type data in an int array */
// Array, array capacity, data to be deleted
{
	int i, pos=0, j;
	for(i=0;i<n;i++)
	{
		if(a[i] == data)
		{
			pos=i;
			for(j=pos;j<n;j++)
				a[j]=a[j+1];
			n--;
			i--;
		}
	}

	if(pos==-1)
		cout<<"Data not found"<<endl;
	else
		cout<<"Data found & deleted"<<endl;
}

void del1Dchararr(char a[], int n, char data) /* A function that deletes
															  char data in a char array */
// Array, array capacity, data to be deleted
{
	int i, ub, pos=0, j;
	ub = n - 1;
	for(i=0;i<=ub;i++)
	{
		if(a[i] == data)
		{
			pos=i;
			for(j=pos;j<=ub;j++)
				a[j]=a[j+1];
			ub--;
			i--;
		}
	}

	if(pos==-1)
		cout<<"Data not found"<<endl;
	else
		cout<<"Data found & deleted"<<endl; // Commentable on demand
}

void binintarrsearch(int a[], int n, int data) /* A program that searches for a
																  given piece of data in an int
																  array using binary search
																  method */
// Array, array capacity, data to be searched
{
	int pos=-1,ub,up,mid,low=0;
	cout<<"Enter data to be searched"<<endl;
	cin>>data;
	ub = n - 1;
	up = ub;
	while(low<=up)
	{
	 mid=(low+up)/2;
	 if(data==a[mid])
		{
		 pos=mid;
		 break;
		}
	 else if(data<a[mid])
		up=mid-1;
	 else if(data>a[mid])
		low=mid+1;
	}
 if (pos==-1)
	cout<<"Data not found"<<endl;
 else
	cout<<"Data was found in psition "<<mid<<" first"<<endl;
}

void linintarrsearch(int a[], int n, int search) /* A program that searches for
																	 a given piece of data in an
																	 int array using linear
																	 search method */
// Array, array capacity, data to be searched
{
	int pos=-1,ub,i;
	ub=n-1;
	for(i=0;i<=ub;i++)
	{
		cout<<"Enter "<<(i+1)<<" th data"<<endl;
		cin>>a[i];
	}

	for(i=0;i<=ub;i++)
	{
		if(search == a[i])
		{
			pos = i;
			break;
		}
	}
	cout<<"Data was found in position "<<i<<" first"<<endl;
}

void intswap(int &a, int &b) // A program that swaps the int values in 2 var.s
// Number 1, nnumber 2
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void intarrrev(int a[], int &n) // A function that reverses an int array
// Array, array capacity
{
	int i, j;
	for (i=0,j=n;i<(n/2);i++,j--)
	intswap(a[i], a[j]);
}

double fact(int n) // A funtion that returns the factorial of a number
// Number
{
	double p=1;
	for(int i=2;i<=n;i++)
		p *= i;
	return p;
}

double ncr(int n,int r) /* A funtion that finds the number of combinations of
									'r' in 'n' */
// Number 1, number 2
{
	double v;
	v = fact(n) / fact(n-r) / fact(r);
	return v;
}

double npr(int n,int r) /* A funtion that finds the number of permutations of
									'r' in 'n' */
// Number 1, number 2
{
	double v;
	v= fact(n) / fact(n-r);
	return v;
}
