// Task5.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write function for swapping in an m x n array rows k and l.
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
void mySwap(int**arr,int m,int n,int k, int l);
int main()
{
	int **arr = new int*[2];
	for (int i = 0; i < 2; i++) {
		arr[i] = new int[4];
	}
	srand(time(NULL));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}
	printf("Before swaping\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("[%d][%d]=%d",i,j,arr[i][j]);
		}
		printf("\n");
	}
	mySwap(arr, 2, 4, 1, 2);
	cin.get();
}

void mySwap(int**arr, int m, int n,int k, int l) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		temp = arr[k - 1][i];
		arr[k - 1][i] = arr[l - 1][i];
		arr[l - 1][i] = temp;
	}
	cout << "After swaping" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("[%d][%d]=%d", i, j, arr[i][j]);
		}
		printf("\n");
	}
}