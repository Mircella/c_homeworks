// Task14.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a program to print all input lines that are longer than 80 characters
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string temp;
	ifstream input("filename");
	if (!input) { cout << "Fail to open a file" << endl; }
	else {
		while (!input.eof()) {
			getline(input, temp);
			if (temp.length() > 80) {
				cout << temp << endl;
			}
			else { continue; }
			
		}
		input.close();
	}
	cin.get();
}

