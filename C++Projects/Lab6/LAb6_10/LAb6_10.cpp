// LAb6_10.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Enter numbers:
n, x, an, an-1, .....,a1, a0
n is an integer, the other numbers are double.
Write a program computing :
y= anxn +an-1xn-1+ +a1x+a0
by means of Horners scheme. (https://en.wikipedia.org/wiki/Horner%27s_method).
For example for n=3 we use the following identity:
a3x3 + a2x2 +a1x + a0  {(a3x + a2)x + a1}x + a0
For n>3 the formula is analogous.
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	
	int n;
	cout << "Enter the power n: " << endl;
	cin >> n;
	double *koeff = new double[n+1];
	double a,x,result;
	
	cout << "Enter koefficients:" << endl;
	for (int i = n; i >= 0; i--) {
		cin >> a;
		koeff[i] = a;
	}
	cout << "Enter value of x:" << endl;
	cin >> x;
	cout << "Your polynomial is:" << endl;
	string polynomial="y=";
	string s,pow;
	for (int i = n; i >= 0; i--) {
		ostringstream os;
		os << koeff[i];
		s = os.str();
		polynomial.append(s);
		if (i >0) {
			ostringstream os2;
			os2 << i;
			pow = os2.str();
			polynomial.append("*x").append(pow).append("+");
		}
	}
	cout << polynomial << endl;
	result = koeff[n];
	for (int i = 1; i < n + 1; i++) {
		result *= x;
		result += koeff[n - i];
	}
	cout << "Result is:"<<result << endl;
    return 0;
}

