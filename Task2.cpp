// Task2.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a program with a char table with the text: alice has got a vermilion cheetah. 
Program should check the number of characters with even ASCII
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
void func(char *c, int length);
int main()
{
	char*c = "alice has got a vermilion cheetah";
	int size = sizeof(c) / sizeof(char);
	cout << size << endl;
	func(c, size);
    return 0;
}
void func(char *c, int length) {
	for (int i = 0; i < length; i++) {
		if ((i % 2) != 0) { continue; }
		else { 
			int k = *(c+i);
			cout << k << endl; 
		}
	}
}

