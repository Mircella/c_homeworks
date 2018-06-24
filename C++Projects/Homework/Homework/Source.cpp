#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*void Modify(int *a, int *b, int c)
{
	cout << "Modify " << *a << " " << *b << " " << c << endl;
	*a = *b + c; b = 0; c = 0;
	//cout << "Modify " << *a << " " << *b << " " << c << endl;
	//cout << "Modify " << *a << " " << b << " " << c << endl;
	cout <<"Modify "<< a << " " << b << " " << c << endl;
}
void Display(int a, int b, int c)
{
	Modify(&a, &b, c);
	cout <<"Display "<< a << " " << b << " " << c << endl;
}*/
void main() {
	ofstream fout;
	fout.open("C:\\Users\\Yevgeniya\\Desktop\\result.txt", ios_base::app);
	ifstream fin("C:\\Users\\Yevgeniya\\Desktop\\sample.txt");
	string word;
	if (!fin.is_open()) {
		cout << "Impossible to open the file" << endl;
	}
	else {
		cout << "OK" << endl;
		while (!fin.eof()) {
			getline(fin,word);
			cout << word << endl;
		    if(fin.eof())break;
		}
	}
	fin.close();
	/*int *a;
	a = new int[50];
	*a = 1;
	*(a + 3) = 4;
	cout << a[3] << endl;
	int n;
	cin >> n;
	int *b = new int[n];*/
	//Display(0,1,2);
	/*int z1, z2;
	int *w1, *w2;
	w1 = &z1; w2 = &z2;
	*w1 = 10; *w2 = 20;
	cout << *w1 << " " << *w2 << endl;
	w1 = w2;
	cout << *w1 << " " << *w2 << endl;
	*w1 = 30;
	cout << *w1 << " " << *w2 << endl;*/
	
	
	typedef char* st;//change type char* to st, now we may use st instead of char*
	
    
}


