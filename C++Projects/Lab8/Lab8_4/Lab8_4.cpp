// Lab8_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;
struct  node {
	char *name=new char[11];
	int age;
	node *nextNode;
};
node* createNode(node *head, char*name, int age);
bool mycomp(char* line, char* line2);
void print(node*head);
int main(){
	node* head = NULL;
	char* name=new char[11];
	int age;
	bool a = true;
	cout << "Enter a name(max length 10) and age. Program stops when you enter an empty line" << endl;
	while (true) {
		cout << "Name:";
		cin >> name;
		cout << "Age:";
		cin >> age;
		if (mycomp(name, " ")) { break; }
		if (cin.fail()) { break; }
		}
	
    return 0;
}
node* createNode(node *head, char*name,int age) {
	node* newNode;
	newNode = new node;
	newNode->age = age;
	newNode->name = name;
	newNode->nextNode=head;
	head = newNode;
	return head;

}

void print(node*head){
	node*current = head;
	cout << "NAME\t\tAGE" <<endl;
	while (current) {
		cout << current->name << " " << current->age << endl;
		current = current->nextNode;
	}
}

bool mycomp(char* line, char* line2) {
	for (int i = 0; i < strlen(line); i++) {
		if (line[i] != line2[i]) {
			return false;
		}
	}
	return true;
}