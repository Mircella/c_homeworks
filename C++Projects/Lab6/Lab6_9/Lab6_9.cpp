// Lab6_9.cpp : Defines the entry point for the console application.
//Li Yevgeniya
/*
Write a game :
Computer generates a random integer number from the interval [0,9],
and a player should guess this number asking a given number of questions.
*/

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int number = rand() % 10;
	int guess;
	cout << "You have 3 attempts to guess the number from 0 to 9. Enter your number:" << endl;
	for (int i = 0; i < 3; i++) {
		cin >> guess;
		if (guess == number) {
			cout << "Congratulations!" << endl;
			break;
		}else if(guess<number){
			cout << "Your number is less then number" << endl;
		}else{
			cout << "Your number is more then number" << endl;
		}
	}
	return 0;
}

