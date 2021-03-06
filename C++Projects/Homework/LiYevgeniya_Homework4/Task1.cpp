// Task1.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
A structure is given:
struct ptk
{
char c;
int x, y;
};
Write 3 functions with this structure as parameters and display its contents in tha form :
Point B abscissa 20 ordinate 4
In function 1 parameter is transferred by value,
in function 2 by adresss (pointer)
in function 3 by reference.
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

#include <iterator>
#include <vector>
#include <ctime>
using namespace std;

struct ptk
{
	char c;
	int x, y;
};
void func1(ptk p);
void func2(ptk* p);
void func3(ptk& p);
int main()
{
	ptk p{'B',20,4};
	func1(p);
	func2(&p);
	func3(p);
	cin.get();
}
void func1(ptk p) {
	printf("Point %c abscissa %d ordinate %d\n",p.c,p.x,p.y);
}
void func2(ptk* p) {
    printf("Point %c abscissa %d ordinate %d\n", p->c, p->x, p->y);
}
void func3(ptk& p) {
	printf("Point %c abscissa %d ordinate %d\n", p.c, p.x, p.y);
}
