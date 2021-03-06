// Task4.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a function overwriting components on two-dimensional quadratic 
array with zeroes and remaining components with the value 1. 
Write a program for testing this function.
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
#include <ctime>
using namespace std;
void overwrite(int **arr,int m,int n,int k);
int main()
{
	int**arr = new int*[4];
	for (int i = 0; i < 4; i++) {
		arr[i] = new int[4];
	}
	srand(time(NULL));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}
	cout << "Before overwriting" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	overwrite(arr, 4, 4, 7);
	cin.get();
	return 0;
}
void overwrite(int **arr, int m, int n, int k) {
	int count = 0;
	for (int i = 0; i < m; i++) {
	for(int j=0;j<n;j++){
		arr[i][j] = 0;
	}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1;
			count++;
			if (count == k) {
				break;
			}
		}if (count == k) {
			break;
		}
	}

	cout << "After overwriting" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}