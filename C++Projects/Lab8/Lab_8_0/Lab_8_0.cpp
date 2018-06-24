// Lab_8_0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<fstream>
#include <iostream>

using namespace std;
bool check(int*arr,int size);
int sumOfEven(int *arr, int size);
int main()
{
	int a[100];
	ifstream wej("C:\\Users\\Yevgeniya\\Desktop\\numbers.txt");
	int i = 0;
	while (wej>>a[i]) {
		i++;
	}
	cout<< "Numbers from file:" << endl;
	for (int i = 0; i < 15; i++) {
		cout<< a[i] <<endl;
	}
	if (check(a, 15)) { cout << "Sum of even numbers is greater" << endl; }
	else { cout << "Sum of even numbers is less" << endl; }
	int sum = sumOfEven(a,15);
	cout << "Sum of even numbers " << sum << endl;
	return 0;
}
bool check(int *arr,int size) {
	int sumEven=0;
	int sumOdd = 0;
	for (int i = 0; i < size; i += 2) {
		sumOdd += arr[i];
	}
	for (int i = 1; i < size; i += 2) {
		sumEven += arr[i];
	}
	if (sumEven > sumOdd)return true;
	return false;
}
int sumOfEven(int *arr,int size) {
	int sum = 0;
	for (int i = 1; i < size; i += 2) {
		sum += arr[i];
	}
	return sum;
}