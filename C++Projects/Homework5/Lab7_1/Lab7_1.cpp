// Lab7_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
	int *data;
	
	data = new int[10];
	cout << "Enter a line:" << endl;
	
	for (int i = 0; i < 10; i++) {
		cin >> data[i];
	}
	copy(data, data + 10,ostream_iterator<int>(cout," "));
	return 0;
}

