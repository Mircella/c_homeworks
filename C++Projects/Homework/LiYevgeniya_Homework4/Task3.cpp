// Task3.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a function with two double parameters and one char parameter. 
Function should perform an arithmetic operation on two given double numbers. 
Operation is defined by a char parameter of the form : + - * / for addition, 
substraction multiplication and division respectively. Any other character 
will start an addition operation. Safeguard against dividing by zero is not 
required. Write a program for testing this function.
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
void func(double a,double b,char* c);
int main(int argc, char ** argv)
{
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	char* c = argv[3];
	func(a,b,c);
	cin.get();
	return 0;
}
void func(double a, double b, char* c) {
	double res = 0;
	if (c[0] == '*') {
		res = a * b;
	}
	else if (c[0] == '-') {
		res = a - b;
	}
	else if (c[0] == '/') {
		res = a / b;
	}
	else {
		res = a + b;
	}
	cout << res << endl;
}

