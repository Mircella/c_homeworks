// Classwork3_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<vector>
using namespace std;
void merge(int*arr, int*arr2, int n, int n2);
int main()
{
	int arr[4] = {1,2,5,8};
	int arr2[3] = { 0,9,11 };
	merge(arr, arr2, 4, 3);
	return 0;
}
void merge(int*arr, int*arr2, int n, int n2) {
	int* answer = new int[n + n2];
	int i = 0, j = 0, k = 0;
	while (i < n && j < n2)
	{
		if (arr[i] < arr2[j])
		{
			answer[k] = arr[i];
			i++;
		}
		else
		{
			answer[k] = arr2[j];
			j++;
		}
		k++;
	}

	while (i < n)
	{
		answer[k] = arr[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		answer[k] = arr2[j];
		j++;
		k++;
	}

	for (int i = 0; i < (n + n2); i++) {
		cout << answer[i] << endl;
	}

	
}
	

