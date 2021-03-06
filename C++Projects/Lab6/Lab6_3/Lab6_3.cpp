// Lab6_3.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a proram making the table of the function tg x (tangens) in a 
given interval [a, b] with a given discretization step p.
*/
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstdio>
#include <cmath>
using namespace std;
void table(double a, double b, int p);
int main()
{
	table(-45,45,6);
	cin.get();
}
void table(double a, double b, int p) {
	const double PI = 4.0*atan(1.0);
	a = (a*PI) / 180;
	b = (b*PI) / 180;
	double t = (abs(a) + abs(b)) / (p-1);
	for (int i = 0; i <p; i++) {
		cout << "Tan(x) = " << tan(a) << endl;
		a += t;
	}
}

