// Task13.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a function reverse1(s) that reverses the character string s. Use it to write a program
that reverses its input a line at a time.
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
void reverse(string& line);
int main()
{
	string temp;
	ifstream input("filename");
	if (!input) { cout << "Fail to open a file"; }
	else {
		while (!input.eof()) {
			getline(input, temp);
		}
		input.close();
		reverse(temp);
		cout << temp << endl;
		cin.get();
		//cout << temp << endl;
	}
}
void reverse(string& line) {
	vector<char> temp(line.begin(),line.end());
	reverse(temp.begin(), temp.end());
	string st(temp.begin(),temp.end());
	line = st;
	
}