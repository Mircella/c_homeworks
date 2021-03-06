//Li Yevgeniya
/*
Write a program to remove trailing blanks and tabs from each line of input, and to delete
entirely blank lines.
*/
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
	ifstream file;
	file.open("filename");
	if (!file) { 
		cout << "Fail to open a file" << endl; 
	}
	else {
		char s;
		vector<char>symbols;
		file.seekg(0, ios::end);
		int size = file.tellg();
		file.seekg(0, ios::beg);
		for (int i = 0; i < size; i++) {
			file.get(s);
			if (s == ' ' || s == '\t') {
				continue;
			}
			else {
				symbols.push_back(s);
			}	
		}

		ofstream off("filename");
		for (vector<char>::iterator it = symbols.begin(); it < symbols.end(); it++) {
			off << *it;
		}
		file.close();
		off.close();
	}
	cin.get();
}