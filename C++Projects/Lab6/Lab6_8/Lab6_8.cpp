// Lab6_8.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Find a function checking that a given number is a prime number.
Write a program asking for entering a positive number, using 
this function and displaing the message is this number a prime one or not.
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <ctime>
using namespace std;

bool check(int n);
int main()
{
	int a;
	cout << "Enter a positive integer" << endl;
	cin >> a;
	if (check(a)) cout << a << " is a prime number" << endl;
	else cout << a << " isn't a prime number" << endl;
    return 0;
}
bool check(int n) {
	if (n == 1) {
		return false;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n%i == 0) {
				return false;
			}
		}
	}
	return true;
}

