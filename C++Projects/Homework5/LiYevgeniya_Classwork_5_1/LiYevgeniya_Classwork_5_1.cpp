// LiYevgeniya_Classwork_5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
using namespace std;
void ord(char* a, char* b, char*c);
int myStrncmp(char* cs, char* ct, int n);
int main()
{
	char*a = "Janek";
	char*b = "Jacek";
	char*c = "Kasia";
	ord(a, b, c);
	return(0);
}
void ord(char* a, char* b, char*c) {
	int ret, ret2;
	int size = (strlen(a) < strlen(b)) ? strlen(a) : strlen(b);
	ret = myStrncmp(a, b, size);

	if (ret < 0) {
		cout << a << " ";
		size = (strlen(b) < strlen(c)) ? strlen(b) : strlen(c);
		ret2 = myStrncmp(b, c, size);
		if (ret2 < 0) {
			cout << b << " " << c << endl;
		}
		else {
			cout << c << " " << b << endl;
		}
	}
	else {
		cout << b << " ";
		size = (strlen(a) < strlen(c)) ? strlen(a) : strlen(c);
		ret2 = myStrncmp(a, c, size);
		if (ret2 < 0) {
			cout << a << " " << c << endl;
		}
		else {
			cout << a << " " << b << endl;
		}
	}


}

int myStrncmp(char* cs, char* ct, int n) {

	for (int i = 0; i < n; ) {
		if (cs[i] == ct[i]) {
			i++;
		}
		else if (cs[i] > ct[i]) {
			return 1;
		}
		else {
			return -1;
		}
	}
	return 0;
}

