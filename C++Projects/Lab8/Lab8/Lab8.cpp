// Lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Point
{
public:
	double x, y;
	Point(double nx, double ny)
	{
		x = nx;
		y = ny;
		cout << "2-parameter constructor" << endl;
	}
	Point(Point &o) //The parameters should always be of this type
	{
		x = o.x;
		y = o.y; cout << "custom copy constructor" << endl;
	}
};
class IntegerArray {
public:
	int *data;
	int size;
	IntegerArray(int size) {
		data = new int[size];
		this->size = size;
	}
	IntegerArray(IntegerArray &o) { 
		data = new int[o.size]; 
		size = o.size; 
		for (int i = 0; i < size; ++i) data[i] = o.data[i]; 
	}
	~IntegerArray() {
		cout<<"Desructor invoked"<<endl;
		delete[] data;
	}
};
struct spunkt
{
	char c;
	int x, y;
};
void initialize(spunkt& p,char c, int a, int b);
int main() {
	spunkt p;
	initialize(p,'A',4,5);
	cout << "P: " << p.c << " " << p.x << " " << p.y << endl;
}
void initialize(spunkt& p, char c, int a, int b) {
	p.c = c;
	p.x = a;
	p.y = b;
}