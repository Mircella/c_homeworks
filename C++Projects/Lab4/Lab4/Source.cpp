//Li Yevgeniya
/*
An integer array int a[ ] of the size n is given. Assume n even.
Write a function
int funkcja2(int a[ ], int n)
returning such an index k (of the range 0 through n-2) that the condition:
a[k]+..+a[k+n/2-1] = sum of remaining values of ythe array a[ ].
is fulfilled. If such a k does not exist, the function should return (-1).
*/
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
/*int function(int a[],int n);
int main() {
	srand(time(NULL));
	const int n = 4;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10 + 1;
	}
	cout<<"Result is "<<function(a,n)<<endl;
	cin.get();
}
int function(int a[], int n) {
	int t = n / 2 - 1;
	int result1 = 0;
	int result2 = 0;
	int generalSum = 0;
	int index = 0;
	cout << "Numbers of array " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	for (int i = 0; i < n; i++) {
		generalSum += a[i];
	}
	cout << "general sum is" << generalSum << endl;
	for (int i = 0; i < n-t; i++) {
		index = i;
		result1 = 0;
		//result2 = 0;
		for (int k = i; k <= t; k++) {
			result1 += a[k];
		}
		result2 = generalSum - result1;
		cout << "result1 " << result1 << " result2 " << result2 <<" index "<<index<< endl;
		
		if (result1 == result2) {
			return index;
		}
		

		
	}
	return -1;
}*/
double compute(double a, double b);
int main() {
	double x1, x2, x3, y1, y2, y3;
	cout << "Enter a coordinate x1" << endl;
	cin >> x1;
	cout << "Enter a coordinate x2" << endl;
	cin >> x2;
	cout << "Enter a coordinate x3" << endl;
	cin >> x3;
	cout << "Enter a coordinate y1" << endl;
	cin >> y1;
	cout << "Enter a coordinate y2" << endl;
	cin >> y2;
	cout << "Enter a coordinate y3" << endl;
	cin >> y3;
	double a = x2 - x1;
	double b = y2 - y1;
	double res1 = compute(a, b);
	a = x3 - x1;
	b = y3 - y1;
	double res2 = compute(a, b);
	a = x3 - x2;
	b = y3 - y2;
	double res3 = compute(a, b);
	double sum = res1 + res2 + res3;
	double r1 = res1 / sum;
	double r2 = res2 / sum;
	double r3 = res3 / sum;
	
}
double compute(double a, double b) {
	double res = sqrt(pow(a, 2) + pow(b, 2));
	return res;
}