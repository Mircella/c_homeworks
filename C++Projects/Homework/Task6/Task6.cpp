// Task6.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a function bool reverse(char* s, char* t) checking if the string t is a reverse of a string s.
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
bool myReverse(char* s, char* t);
int main()
{
	char *first = "JAVA";
	char *second = "avaj";
	myReverse(first, second);
	if (myReverse(first, second)) {
		cout<<"It is a reverse"<<endl;
	}
	else {
		cout << "It is not a reverse" << endl;
	}

	return 0;
}
bool myReverse(char* s, char* t) {
	string first = s;
	string second;
	second.append(t);
	int k = second.length();
	if (first.length() != k)return false;
	else {
		for (int i = k - 1,j=0; i >= 0; i--,j++) {
			if (tolower(second[i]) == tolower(first[j])) {
				continue;
			}
			else {
				return false;
			}
		}
	}
	
	return true;
}

