// Lab7_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void calculate(int**arr,int row,int col);
int main()
{
	srand(time(NULL));
	int ** A = new int *[3];
	for (int i = 0; i < 3; i++)
	{
		A[i] = new int[3];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = ((rand() % 10));
		}
	}
	
	cout << "Matrix" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	calculate(A, 3, 3);
}
void calculate(int**arr, int row, int col){
	int result = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if(i==j){
				result += arr[i][j];
			}
		}
		
	}
	cout << "Result is " << result << endl;
}
