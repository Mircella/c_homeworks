// Task1.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a function finding the length of the longest constant subsequence of a sorted integer array.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
void longest(int arr[], int size);
int main()
{
	int a[] = {1,2,5,90,789,7,8,9,88};
	longest(a,9);
	return 0;
}

void longest(int arr[], int size) {
	int subSeqLength = 1;
	int longest = 1;
	bool longestSub = false;
	int index1 = 0;
	int index2 = 0;
	for (int i = 0; i < size-1; i++) {
		
		if (arr[i] < arr[i + 1]) {
			subSeqLength++;
		}
		
		else if (subSeqLength > longest) {
			longest = subSeqLength;
			longestSub = true;
		}
		
		else if (longestSub = true) {
			arr[i] = index1;
			arr[i + 1] = index2;
		}
		
		else subSeqLength = 1;
	}

	cout <<subSeqLength << endl;
	
	
}