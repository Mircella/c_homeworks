// HW5_9.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <map>
#include <cstdlib>
#include <string>

using namespace std;

string translate(char* text,int size);
int main()
{
	char text[128];
	string result;
	ifstream file("C:\\Users\\Yevgeniya\\Desktop\\example.txt",ios::in);

	if (!file.is_open()) {
		cout << "Error" << endl;
	}
	else {
		file.getline(text,127);
		file.close();
		result = translate(text,127);

		cout << result << endl;
	}
	return 0;
}
string translate(char* text,int size) {
string result="";
	
	map<char, char*>dictionary = {
	{'A',".-"},
	{'B',"-..."},
	{'C',"-.-."},
	{'D',"-.."},
	{'E',"."},
	{'F',"..-."},
	{'G',"-.."},
	{'H',"...."},
	{'I',".."},
	{'J',".---"},
	{'K',"-.-"},
	{'L',".-.."},
	{'M',"--"},
	{'N',"-."},
	{'O',"---"},
	{'P',".--."},
	{'R',".-."},
	{'S', "..."},
	{'T', "-"},
	{'U', "..-"},
	{'W',".--"},
	{'V',"...-"},
	{'X',"-..-"},
	{'Y',"-.-"},
	{'Z',"--.."},
	{'1',".----"},
	{'2',"..---"},
	{'3',"...--"},
	{'4',"....-"},
	{'5',"....."},
	{'6',"-...."},
	{'7',"--..."},
	{'8', "---.."},
	{'9', "----."},
	{'0', "---"},
	{' ',".-.-.-" }
	};
	while (*text) {
	for (const auto&pair : dictionary) {
		if (*text == pair.first) {
			result.append(pair.second);
		}
	}
	text++;
	}
	

	return result;
}
