// Task10.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write your own, pointer version of the function strncpy(s ,t ,n) which copies at
most n characters of t to s.
*/


#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
void myStrncpy(string &s, string t, int n);
int main()
{
	string first = "Kazakhstan";
	string second = "Poland";
	myStrncpy(first,second,5);
	cout << first << endl;
	cin.get();
}

void myStrncpy(string &s, string t, int n){
	if (n >t.length()) {
		n = t.length();
	}
	for (int i = 0; i < n; i++) {
		s.at(i) = t.at(i);
	}
	s.erase(s.begin()+n,s.end());
}