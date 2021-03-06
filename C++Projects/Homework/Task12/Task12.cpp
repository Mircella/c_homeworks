// Task12.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write your own, pointer version of the function int strncmp(cs,ct,n) which
compares string cs to string ct; returns <0 if cs<ct, 0 if cs==ct, or >0 if cs>ct.
*/


#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
int myStrncmp(string cs, string ct, int n);
int main()
{
	string first = "Java";
	string second = "C++";
	int result = myStrncmp(first, second, 3);
	cout << result << endl;
	cin.get();
}

int myStrncmp(string cs, string ct, int n) {
	if (n >ct.length()) {
		n = ct.length();
	}
	for (int i = 0; i < n; ) {
		if (cs[i] == ct[i]) {
			i++;
		}
		else if (cs[i] > ct[i]) {
			return 1;
		}
		else {
			return -1;
		}
	}
	return 0;
}