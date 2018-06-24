#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <math.h>
using namespace std;
const int MAXCHAPT = 20;
struct Point{
	int x;
	int y;
};
void change(Point p,int& a, int& b);
void shiftRight(Point p, int&a);
void shiftUp(Point p, int&a);
void test(Point& p);
void changeA(int&a);
int main() {
	/*Point p{1,2};
	cout << "coordinates " << p.x << " " << p.y << endl;
	change(p, p.x, p.y);
	cout << "new coordinates " << p.x << " " << p.y << endl;
	shiftRight(p, p.x);
	cout << "new coordinates after shiftRight " << p.x << " " << p.y << endl;
	shiftUp(p,p.y);
	cout << "new coordinates after shiftUp " << p.x << " " << p.y << endl;
	double res = sqrt(pow(p.x,2)+pow(p.y,2));
	cout << "distance is " << res << endl;
	test(p);
	cout << "new coordinates after test " << p.x << " " << p.y << endl;*/
	int a = 5;
	changeA(a);
	int *b =&a;
	int *c = b;
	int&x = *&a;
	int i = 9;

	cout << a << endl;
	cout << b << endl;
	cout << *b << endl;
	cout << &b << endl;
	cout << c << endl;
	cout << x << endl;
	
	cin.get();
}
void change(Point p, int& a, int& b) {
	a = 3;
	b = 4;
}
void shiftRight(Point p, int&a) {
	a += 5;
}
void shiftUp(Point p, int&a) {
	a += 2;
}
void test(Point& p) {
	p.x = 12,
	p.y = 5;
}
void changeA(int&a) {
	a = 8;
}