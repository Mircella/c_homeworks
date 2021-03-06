// Lab7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
using namespace std;
void sort(int arr[],int a,int b);
int F(char*S);
void dash(char*S);
void CodeText(char *s, int key);
char change(char symb,int direction);
int main()
{
	
	char *S = "ZAYB";
	CodeText(S,-3);
	
    return 0;
}
int F(char*S) {
	int count = 0;
	for (int i = 0; i < strlen(S); i++) {
		if (S[i] != 'x') {
			count++;
		}
	}
	return count;
}
void dash(char*S) {
	string newS;
	for (int i = 0; i < strlen(S); i++) {
		newS.push_back(S[i]);
		if(i!=(strlen(S)-1))
		newS.push_back('-');
	}
	cout << newS << endl;
	
}
void CodeText(char *s, int key) {
	string result;
	char symb = ' ';
	int times = abs(key);
	for (int i = 0; i < strlen(s); i++) {
		symb = s[i];
		for (int j = 0; j < times; j++) {
			if(key>0)
				symb = change(symb,1);
			else {
				symb = change(symb,-1);
			}
		}
		result.push_back(symb);
	}
	for (int i = 0; i < strlen(s); i++)
		cout << result[i];
	cout << endl;
	
}
char change(char symb,int direction) {
	char c = 'A';
	vector<char>symbolsUp;
	vector<char>symbolsDown;
	do {
		symbolsUp.push_back(c);
		c++;
	} while (c != 'Z');
	char c2 = 'a';
	do {
		symbolsDown.push_back(c2);
		c2++;
	} while (c2 != 'z');
	if (direction > 0) {
	if (symb == 'Z') { symb = 'A'; }
	else if (symb == 'z') { symb = 'a'; }
	else { symb++; }
	}
	else {
    if (symb == 'A') { symb = 'Z'; }
	else if (symb == 'a') { symb = 'z'; }
	else { symb--; }
    }
	return symb;
}
	
void sort(int arr[], int a, int b) {
    int left = a;
	int right = b;
	int middle = arr[(a + b) / 2];
	do {
		while (arr[a] > middle) { a++; }
		while (arr[b] < middle) { b--; }
		if (left <= right) {
			swap(arr[left], arr[right]); 
			left++;
			right--;
		}
	} while (a<=b);
	if (a < right)sort(arr,a,right);
	if (b > left)sort(arr,left,b);
	
}

