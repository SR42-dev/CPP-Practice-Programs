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
{
	int i;
	for(i=0;i<ub;i++)
		cin>>a[i];
}

void inp2Dchararr(char a[][32], int numwor) // Takes the input for a 2-D char array
{
	int i;
	for(i=0;i<numwor;i++)
		gets(a[i]);
}

void outp1Dchararrvert(char a[]) // Vertically outputs a 1-D char array
{
	int i;
	for(i=0;a[i]!=0;i++)
		cout<<a[i]<<endl;
}

void outp2Dchararrvert(char a[][32], int numwor) // Vertically outputs a 2-D char array
{
	int i, j;
	for(i=0;i<=numwor;i++)
		for(j=0;a[i][j]!=0;j++)
			cout<<a[i][j]<<endl;
}

void outp1Dchararrhor(char a[]) // Horizontally outputs a 1-D char array
{
	int i;
	for(i=0;a[i]!=0;i++)
		cout<<a[i]<<" ";
}
void outp2Dchararrhor(char a[][32], int numwor) // Horizontally outputs a 2-D char array
{
	int i, j;
	for(i=0;i<=numwor;i++)
		for(j=0;a[i][j]!=0;j++)
			cout<<a[i][j]<<" ";
}

void inp1Dintarr(int a[]) // Takes the input for a 1-D int array
{
	int i;
	for(i=0;i<32;i++)
		cin>>a[i];
}

void inp2Dintarr(int a[][32], int r, int c) // Takes the input for a 2-D int array
{
	int i, j;
	for(i=0;i<r;i++)
		for(i=0;i<c;i++)
			cin>>a[i][j];
}

int isamp(int n, int m) /* Amicable pair - A pair of numbers where the sum of
									the factors of one number is equal to the seconf=d
									number and vice versa*/
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
{
	int gcd, num, i;
	if (a > b)
		b = num;
	else if (a > b)
		a = num;
	else if (a = b)
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

void intarrasc(int a[], r) // A function that sorts int arrays in ascending order
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

void intarrdesc(int a[], r) /* A function that sorts int arrays in descending
								      order */
{
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
