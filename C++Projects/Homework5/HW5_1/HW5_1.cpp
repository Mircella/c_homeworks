// HW5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node {
	int val;
	struct node * next;
};
int remove_by_value2(node**head, int val);
void push_head(node ** head, int val);
void print_list(node * head);
int remove_by_value(node ** head, int val);
int main()
{
	node *head = NULL;
	for (int i = 1; i <= 10; i++)push_head(&head, i);
	print_list(head);
	int value = 10;
	cout << "removed by value "<<value<<" index is " << remove_by_value2(&head,value) << endl;
	print_list(head);
}

void push_head(node ** head, int val)
{
	node * new_node;
	new_node = new node;

	new_node->val = val;
	new_node->next = *head;
	*head = new_node;
}

void print_list(node * head)
{
	node * current = head;

	while (current)
	{
		cout << current->val << endl;
		current = current->next;
	}
}

int remove_by_value(node ** head, int val) {
	int index = 0;
	int tempVal = 0;
	node * current = *head;
	node * temp = NULL;
	if (current == NULL) {
		return 0;
	}
	
	if (current->val == val) {
		temp = (*head)->next;
		tempVal = (*head)->val;
		delete current;
		*head = temp;
		return index;
	}
	index = 1;
	while (current->next->val != val) { 
		current = current->next; 
		index++;
	}
	temp = current->next->next;
	delete current->next;
	current->next = temp;

	return index;
}

int remove_by_value2(node**head, int val) {
	    int i = 0;
		node *current = *head;
		node *temp_node = NULL;
	if (current->val == val) {
		*head = current->next;
		delete current;
		return 0;
	}
	while (current->next) {
		++i;
		if (current->next->val == val) {
			temp_node = current->next;
			current->next = temp_node->next;
			delete temp_node;
			return i;
		}return -1;
	}
}