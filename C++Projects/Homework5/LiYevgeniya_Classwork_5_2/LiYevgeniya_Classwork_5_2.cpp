// LiYevgeniya_Classwork_5_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
using namespace std;
int calculate(char*line);
int main()
{
	char a[128];
	cout << "Enter a line:" << endl;
	cin >> a;
	int res = calculate(a);
	cout << "Result is " << res << endl;	
	return 0;
}
int calculate(char*line) {
	int result = 0;
	int size = strlen(line);
	for (int i = 0; i < size; i++) {
		if (islower(line[i]))
			result++;	
	}

	return result;

}