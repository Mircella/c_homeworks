// Lab6.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;
int sum(int **x, int nr, int nc);
int main()
{
	srand(time(NULL));
	int result=0;
	int matrice[3][2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			matrice[i][j] = rand() % 9 + 1;

		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout.width(4);
			cout<<matrice[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			result+=matrice[i][j];

		}
	}
	cout << "Commun sum is " << result << endl;
	int B[3][2] = { 
		{1,2},{0,1},{1,0}
	};
	int *pB[3] = {B[0],B[1],B[2]};
	cout << "Sum of components is " << sum(pB, 3, 2) << endl;

	return 0;
}
int sum(int **x, int nr, int nc) {
	int s = 0;
	for (int i = 0; i < nr; i++) {
		for (int j = 0; j < nc; j++) {
			s += x[i][j];
		}
	}
	return s;
}

