// Lab7_2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iterator>
#include <ctime>
using namespace std;
struct list {
	int a;
	list * listNext;
};
list * push(list*head,int value);
int main()
{
	int n;
	list*head=NULL;
	
	cout << "Enter a number n:" << endl;
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		head=push(head,rand()%10);
	}
	list*current = head;
	while (current)
	{
		cout << current->a << endl;
		current = current->listNext;
	}

	
	return 0;
}
list * push(list*head, int value) {
	list*newList = new list;
	newList->a = value;
	newList->listNext = head;
	head = newList;
	return head;
}