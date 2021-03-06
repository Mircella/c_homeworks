// Lab8_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<fstream>
#include <iostream>
#include <string>
using namespace std;
class spunkt
{
public:
	char c;
	int x, y;
public:
	spunkt() {
		cout << "Constructor without parameters" << endl;
		this->c = 'A';
		this->x = 3;
		this->y = 4;
	}
public:
	spunkt(char c,int x,int y) {
		cout << "Constructor with 3 parameters" << endl;
		this->c = c;
		this->x = x;
		this->y = y;
	}
public:
	spunkt(spunkt&obj) {
		cout << "Copy constructor" << endl;
		c = obj.c;
		x = obj.x;
		y = obj.y;
	}
public:
	void display() {
		cout << "Data of the object " << this->c << " " << this->x << " " << this->y << endl;
	}
	~spunkt() {
	
	}
};
int mystrc(char *x, char *y);
void initialize(spunkt* p,char c, int x, int y);
int main()
{
	char c = 'J';
	int x = 17;
	int y = 20;
	spunkt obj;
	initialize(&obj, c, x, y);
	cout << "After initializing function" << endl;
	obj.display();
	spunkt obj2;
	obj2.display();
	spunkt obj3('B',12,10);
	obj3.display();
	spunkt obj4 = obj;
	obj4.display();
	
	return 0;
}
int mystrc(char *x, char *y) {
	while (*x++ == *y++);
	*x--;
	*y--;
	return *(x--) - *(y--);
}
void initialize(spunkt* p, char c, int x, int y) {
	p->c = c;
	p->x = x;
	p->y = y;
}