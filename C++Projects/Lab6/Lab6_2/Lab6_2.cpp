// Lab6_2.cpp : Defines the entry point for the console application.
// Li Yevgeniya
/*
Write a program computing the product of natural numbers which are
greater than or equal to a given number d (d>=2) and meet the condition :
n2/2 – n >= d (n=1,2,...,d)
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstdio>
#include <cmath>
#include <vector>
#include<iterator>
using namespace std;
void calculate(int d);
int main()
{
	int d;
	cout << "Enter a number: " << endl;
	cin >> d;
	calculate(d);
    return 0;
}
void calculate(int d) {
	vector<int>numbers;
	vector<int>::iterator it;
	int result = 1;
	for (int i = 1; i <= d; i++) {
		if ((pow(i, 2) / 2 - i) <= d) {
			numbers.push_back(i);
		}
	}
	for (it = numbers.begin(); it < numbers.end(); it++) {
		result *= (*it);
	}
	cout << "result is " << result << endl;
}

