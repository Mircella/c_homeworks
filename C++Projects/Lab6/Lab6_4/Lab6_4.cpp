// Lab6_4.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a program for finding the highest common denominator 
(the greatest common divisor) of two nonnegative numbers m an n. 
Use Euclidean algorithm, described for instance in
https://en.wikipedia.org/wiki/Euclidean_algorithm
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstdio>
#include <cmath>
using namespace std;
int denominator(int a,int b);
int main()
{
	int a = 18;
	int b = 24;
	cout << "Highest common denominator is " << denominator(a,b) << endl;
	return 0;
}
int denominator(int a, int b) {
	int result = 1;
	int d;
	int remainder = 1;
	if ((a > b) ? (a%b == 0) : (b%a == 0)) {
		result = (a > b)?b:a;
		return result;
	}
	else {
		while (remainder) {
			d = a / b;
			remainder = a - b*d;
			a = b;
			result = b;
			b = remainder;
		}
	}
	return result;

}
