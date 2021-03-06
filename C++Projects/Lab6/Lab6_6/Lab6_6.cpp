// Lab6_6.cpp : Defines the entry point for the console application.
//LiYevgeniya
/*
An integer p expressed in positional notation with the base p is given
(https://en.wikipedia.org/wiki/Positional_notation)
Write a function for expressing this number in the decimal positional notation.
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstdio>
#include <cmath>
using namespace std;
int express(int number, int base);
int main()
{
	int a = 178;
	express(a, 8);
    return 0;
}
int express(int number, int base) {
	double c = 10;
	int n = 1;
	int b = 10;
	int result = 0;
	while (number > c) {
		n++;
		c = pow(b, n);
	}
	n-=1;
	int *arr = new int[n+1];
	for (int i = 0,k=n; i < n + 1; i++) {
		arr[i] = number / pow(10, k);
		number -= arr[i]*pow(10, k);
		k--;
	}
	for (int i = 0; i < n + 1; i++) {
		if (arr[i] >= base) {
			cout << "Illegal number" << endl;
			return 0;
		}
	}
	for (int i = 0; i < n + 1; i++) {
		result += arr[i]*pow(base,n-i);
	}
	cout << result << endl;
	return result;
}