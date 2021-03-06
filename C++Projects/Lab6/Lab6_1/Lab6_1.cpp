// Lab6_1.cpp : Defines the entry point for the console application.
// Li Yevgeniya
/*
There is file with a sequence a1,a2,...,an. Find the longest subsequence 
of positive numbers in that sequence sequence, and display it.
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdio>
#include <cmath>
#include <vector>
#include<iterator>
using namespace std;
void find();
void split(const string& str, vector<int>& numbers,const char ch);
int main()
{
	find();
    return 0;
}
void find() {
	int count = 0;
	int tempCount = 0;
	ifstream input("C:\\Users\\Yevgeniya\\Desktop\\numbers.txt");
	if (!input.is_open()) {
		cout << "Failed to open the file" << endl;
		return;
	}
	char word[100];
	string word2;
	vector<int>numbers;
	input >> word;
	word2 = string(word);
	split(word,numbers,',');
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i] > 0) {
			tempCount++;
		}
		else {
			count = (count>tempCount)? count : tempCount;
			tempCount = 0;
		}
	}

	cout << "Result is "<< count << endl;
}
void split(const string& str, vector<int>& numbers, const char ch) {
	size_t index1 = str.find_first_not_of(ch,0);
	size_t index2 = str.find_first_of(ch,index1);
	while (str.npos != index1 || str.npos != index2) {
		string s =str.substr(index1,index2-index1);
		int a = atoi(s.c_str());
		numbers.push_back(a);
		index1 = str.find_first_not_of(ch,index2);
		index2 = str.find_first_of(ch,index1);
	}
	
	
}
