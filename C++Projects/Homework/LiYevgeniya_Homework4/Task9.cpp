// Task9.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write your own, pointer version of the function strend(s,t), which returns
1 if the string t occurs at the end of the string s, and zero otherwise.
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
int myStrend(string s,string t);
int main()
{
	string first = "I like Java";
	string second = "Java";
	cout<<myStrend(first,second)<<endl;
	cin.get();
    return 0;
}
int myStrend(string s, string t) {
	int size1 = s.size();
	int size2 = t.size();
	if (size1 < size2)return 0;
	else {
		for (int i = size1 - size2,j=0; i < size2; i++,j++) {
			if (s[i] == t[j]) {
				continue;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

