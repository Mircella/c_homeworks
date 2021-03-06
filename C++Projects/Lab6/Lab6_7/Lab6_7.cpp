// Lab6_7.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a program for computing an approximate value of the number π using the following method :
a) generate a certain number of random points in a given square.
b) calculate the proportion of the number of points contained in the incircle of the square 
to the number of all generated points. This proportion is an estimate of the value of π/4.
Input data : number of points to be generated.
Output data: approximate value of of the number π.
Function for generating a random numer from the interval [0,1]:
#include <stdlib.h>
float l_losowa (void)
{
return ( (float) rand() / (RAND_MAX + 1.0) );
}
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstdio>
#include <cmath>
#include <math.h>
using namespace std;
bool check(double R, double x, double y);
double l_losowa(void);
int main()
{
	int N_all = 1000000;
	int N_circle = 0;
	srand(time(0));
	for (int i = 0; i < N_all; i++)
	{
		if(check
		        (
					1.0,
					l_losowa(),
					l_losowa()
					)
				)
				
			N_circle++;
	}
	cout << "Value of PI : " << (N_circle*1.0/N_all)*4 << endl;
	cin.get();
	return 0;
}
bool check(double R, double x, double y)
{
	return ((x*x + y*y) < R*R);
}
double l_losowa(void)
{
	return ((double)rand() / (RAND_MAX + 1.0));
}