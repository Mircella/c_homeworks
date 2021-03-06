// Lab8_Multiplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class cmp {
	
	friend cmp operator*(cmp w1, cmp w2);
	cmp operator+ (cmp w); 
	double re;
	double im;
public:
	cmp() {
		re = 0.;
		im = 0.;
	}
	cmp(double x, double y){
		re = x;
		im = y;
	}
	void display() {
		cout << "re=" << re << " im=" << im << endl;
	}
};

int main()
{
	cmp first(4, 2.5);
	cmp second(-0.5, 2);
	cmp result = first*second;
	result.display();
    return 0;
}

cmp operator*(cmp w1, cmp w2) {
	cmp temp;
	temp.re = w1.re*w2.re - w1.im*w2.im;
	temp.im = w1.re*w2.im + w2.re*w1.im;
	return temp;
}
cmp cmp::operator+(cmp w){
	cmp temp;
	temp.re = re + w.re;
	temp.im = im + w.im;
	return temp;
}