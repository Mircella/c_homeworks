// lab7_1.cpp : Defines the entry point for the console application.
//Li Yevgeniya


#include "stdafx.h"
#include <iostream>
using namespace std;

void func(double a);
int main()
{
	double d;
	cout << "Enter a number:" << endl;
	cin >> d;
	func(d);
	
}
void func(double a) {
	
	double y = 0;
	
	if (a < -1) {
		y = -a - 1;
	}
	else if (a == -1) { y = 0; }
	else if (a > -1 && a < 0) { y = a + 1; }
	else if (a == 0) { y = 1; }
	else if (a > 0) { y = 1 - a; }
	cout << "Result is " << y << endl;

	
}
