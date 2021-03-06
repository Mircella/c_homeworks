// Lab6_5.cpp : Defines the entry point for the console application.
// Li Yevgeniya
/*
Write a program for computing the geometric mean of subsequent odd 
natural numbers greater than or equal to a given number n.
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstdio>
#include <cmath>
using namespace std;
double geomMean(int n);
int main()
{
	int n;
	cout << "Enter a number n:" << endl;
	cin >> n;
	cout<<"Result is "<<geomMean(n)<<endl;
	return 0;
}
double geomMean(int n) {
	int k= n >> 1;
	int*arr;
	int size;
	double result = 1;
	
	if (n % 2 != 0) {
	arr = new int[k + 1];
	size = k + 1;
	}
	else {
		arr = new int[k];
		size = k;
	}
	cout << size << endl;
	for (int i = 0,k=1; i < size; i++,k+=2) {
		arr[i] = k;
	}
	for (int i = 0; i < size; i++) {
		result *= arr[i];
	}
	result = pow(result,(1.0/size));
	return result;
}


