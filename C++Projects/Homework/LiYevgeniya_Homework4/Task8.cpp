// Task8.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write your own, pointer version of the function strcat:
strcat (s , t) copies the string t to the end of s.
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
void myStrcat(string&s, string t);
int main()
{
	string first = "Java";
	string second = " and C++";
	myStrcat(first, second);
	cout << first << endl;
	cin.get();
	return 0;
}
void myStrcat(string&s, string t) {
	for (int i = 0; i < t.size(); i++) {
		s.push_back(t[i]);
	}
}

