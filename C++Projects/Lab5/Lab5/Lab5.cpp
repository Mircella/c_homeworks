// Lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct NUMBER
{
	char sign;
	int figures[5];
};
void display(int *startarr, int *endarr);

int main()
{
	/*NUMBER x, *w = &x;
	char sign = (*w).sign;
	char sign1 = w->sign;
	int x1 = (*w).figures[2];
	int x2 = w->figures[0];*/
	
	/*const int size = 10;
	int a[size];
	int *w = a;
	int i;
	for (i = 0; i< size; i++)
		*(w + i) = i;
	while (*w < 9)
	{
		cout << *w << " ";
		w++;
	}*/
	int a[] = { 10, 15, 4, 25, 3, -4 };
	int *wsk;
	wsk = &a[2];//4
	cout << *(wsk + 1) << endl;//25
	cout << wsk[-1] <<endl;//15
	//cout << a << endl;//address of a
	//cout << wsk << endl;//address of wsk
	cout << (a-wsk) << endl;//-2
	cout << *wsk << endl;//4
	cout << a[*wsk++] << endl;//3
	cout << *wsk << endl;
	cout << *(wsk + wsk[2]) << endl;//-858993460


	cin.get();
	return 0;
}

void display(int *startarr, int *endarr) {
	int a = *startarr;
	while (a<=*endarr) {
		cout << a << endl;
		startarr++;
		a = *startarr;
		
	}
}