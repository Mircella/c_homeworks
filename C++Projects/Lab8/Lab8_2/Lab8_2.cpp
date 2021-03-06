// Lab8_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iterator>
#include <sstream>

using namespace std;
struct spunkt
{
	char c;
	int x, y;
};
void printCurve(spunkt* curve,int size);
int main() {
	int N;
	string word;
	char * pch;
	ifstream file("C:\\Users\\Yevgeniya\\Desktop\\example1.txt");
	if (!file.is_open()) {
		cout << "error with file" << endl;
	}
	
	cout << "Enter a number" << endl;
	cin >> N;
	spunkt* curve = new spunkt[N];
    char symbol=' '; // определить этот символ
	int i = 0;
	while (getline(file, word))
	{
		istringstream iss(word);
		vector<string>result(istream_iterator<string>{iss},
			istream_iterator<string>());
		char c = *result[0].c_str();
		int a = atoi(result[1].c_str());
		int b = atoi(result[2].c_str());
		spunkt p{ c,a,b };
		curve[i] = p;
		i++;
		if (i >= N) {
			break;
	}
	}
	printCurve(curve,N);
	
}

void printCurve(spunkt* curve,int size) {
	for (int i = 0; i < size; i++) {
		cout<<"Point "<<curve[i].c<<" with coordinates "<<curve[i].x<<" and "<<curve[i].y<<endl;
	}
}