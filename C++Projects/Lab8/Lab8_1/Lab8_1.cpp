// Lab8_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct spunkt
{
	char c;
	int x, y;
};
spunkt initialize(spunkt& p);
int main() {
	spunkt p{'A',3,4};
	cout << "(Before initialize) P: " << p.c << " " << p.x << " " << p.y << endl;
	p = initialize(p);
	cout << "(After initialize) P: " << p.c << " " << p.x << " " << p.y << endl;
}
spunkt initialize(spunkt& p) {
	int temp = p.x;
	p.x = p.y;
	p.y = temp;
	return p;
}
