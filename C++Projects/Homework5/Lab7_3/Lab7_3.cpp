// Lab7_3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
struct list {
	int a;
	list * listNext;
};
void StartList(list** wlist); // initiates an empty list pointed by wlist
void AddItem(int i, list** wlist); // add an item at the head of a list
void Displaylist(list* wlist); // displays list
void insert(list**head,int pos,int value);
void remove_by_index(list** head, int pos);
list * push(list*head, int value);
int count(list*head);
void save_in_file(list*head);
int main()
{
	list*head = NULL;
	srand(time(NULL));
	for (int i = 0; i < 4; i++) {
		AddItem(rand() % 10,&head);
	}
	Displaylist(head);
	cout << "After Inserting" << endl;
	insert(&head,2,17);
	Displaylist(head);
	int index = 2;
	cout << "After removing by " << index << "th index:" << endl;
	remove_by_index(&head,2);
	Displaylist(head);
	cout << "General count is " <<count(head)<< endl;
	save_in_file(head);
	return 0;
}

void StartList(list** wlist) {
	wlist = NULL;
} 
void AddItem(int i, list** wlist) {
	list*newList = new list;
	newList->a = i;
	newList->listNext = *wlist;
	*wlist = newList;
}
void Displaylist(list* wlist) {
	list*current = wlist;
	while (current)
	{
		cout << current->a << endl;
		current = current->listNext;
	}
} 
void insert(list**head, int pos, int value) {
	list*current = *head;
	list*temp = NULL;
	int index = 0;
	if (pos == 0) {
		temp = new list;
		temp->a = value;
		AddItem(0,&temp);
	}
	index++;
	while (current)
	{
		if (index == pos) {
			*head = push(current,value);
		}
		current = current->listNext;
		index++;
	}
}
void remove_by_index(list** head,int pos) {
	list * current = *head;
	list * temp_list = NULL;
	if (pos == 0) {
		list*temp = (*head)->listNext;
		delete *head;
		*head = temp;
	}

	for (int i = 0; i < pos - 1; i++) {
		if (current->listNext == NULL) break;
		current = current->listNext;
	}

	temp_list = current->listNext;
	current->listNext = temp_list->listNext;
	delete temp_list;
}
list * push(list*head, int value) {
	list*newList = new list;
	newList->a = value;
	newList->listNext = head;
	head = newList;
	return head;
}
int count(list*head) {
	int result = 0;
	if (head == NULL) { return result; }
	list*temp = head;
	while (temp) {
		result++;
		temp = temp->listNext;
	}

	return result;
}
void save_in_file(list*head) {
	list*current = head;
	int temp;
	ofstream file;
	file.open("C:\\Users\\Yevgeniya\\Desktop\\example1.txt", ios::app);
	if (!file.is_open()) {
		cout << "Error" << endl;
	}
	else {
		while (current) {
			temp = current->a;
			file << temp << endl;
			current = current->listNext;
		}
		file.close();
	}

}