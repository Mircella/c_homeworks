// Classwork3.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

void display(int** mas, int n, int m)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
}
void udal(int** mas, int n, int m, int k)
{
	for (int i = k; i<n; i++)
		for (int j = 0; j<m; j++)
		{
			mas[i][j] = mas[i + 1][j];
		}
	
}
int main()
{
	int a[3][4] = {
		{1,2,3,4} ,{5,6,7,8}, {9,10,11,12}
	};
	int *pA[3] = {a[0],a[1],a[2]};
	
	udal(pA,3,4,1);
	cin.get();
}