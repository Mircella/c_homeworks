// Lab5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// displaying matrix 2D
void display(int a[][100], int r, int c);
void mult(int a[][100], int b[][100], int c[][100], int nr, int np, int nc);
void fill(int *a,int size);
int main()
{
	/*int A[3][3] = { { 10, 1500, 8 },{ 1, 1, 90 },{ 10000, 0, 1 } };
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cout.width(9); // number width field
			cout << A[i][j] << "  ";
		}
		cout << endl;
	}*/
	/*cout << "Matix_2" << endl;
	int A[3][2] = { { 1,2 },{ 0,1 },{ 1, 0 } }, B[2][3] = { { 1, 2, 1 },{ 1, 1, 0 } };
	int C[3][3];
	for (int i = 0; i<3; i++)// rows A
	{
		for (int j = 0; j<3; j++)//columns B
		{
			C[i][j] = 0;
			for (int k = 0; k<2; k++) // columns A & rowsB
				C[i][j] += A[i][k] * B[k][j];
		}
	}
	for (int i = 0; i<3; i++) // display
	{
		for (int j = 0; j<3; j++)
		{
			cout.width(9);
			cout << C[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "Matrix_3" << endl;
	int D[][100] = { { 1,2 },{ 0,1 },{ 1, 0 } }, E[][100] = { { 1, 2, 1 },{ 1, 1, 0 } };
	int F[3][100];
	mult(D, E, F, 3, 2, 3);
	display(F, 3, 3);*/ 
	int arr[15];
	
}
void display(int a[][100], int lw, int lc)
{
	for (int i = 0; i<lw; i++)
	{
		for (int j = 0; j<lc; j++)
		{
			cout.width(9);
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

void mult(int a[][100], int b[][100], int c[][100], int nr, int np, int nc)
//Matrix A(nr*np) Matrix B(np*nc) 
{
	for (int i = 0; i<nr; i++)// rows a
	{
		for (int j = 0; j<nc; j++)//columns B
		{
			c[i][j] = 0;
			for (int k = 0; k<np; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}
void fill(int *a, int size) {}