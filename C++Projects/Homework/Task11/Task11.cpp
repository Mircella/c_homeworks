// Task11.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write your own, pointer version of the function strncat(s,ct,n) which concatenates at
most n characters of string ct to string s, terminates s with '\0'; returns s.
*/


#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
string myStrncat(string s, string ct, int n);
int main()
{
	string first = "Learn";
	string second = "well";
	string result = myStrncat(first, second, 20);
	cout << result << endl;
	cin.get();
}
string myStrncat(string s, string ct, int n) {
	if (n >ct.length()) {
		n = ct.length();
	}
	const char* c = ct.c_str();
	for (int i = 0; i < n; i++) {
		s.push_back(*c);
		c++;
	}
	return s;
}

