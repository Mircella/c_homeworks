// Task7.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Read two integer numbers as the parameters of the program and display their sum.
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
int main(int argc, char ** argv)
{
	double result = 0;
	for (int i = 1; i < 3; i++) {
		double k = atof(argv[i]);
		result += k;
	}
	cout << result << endl;
	cin.get();
    return 0;
}

