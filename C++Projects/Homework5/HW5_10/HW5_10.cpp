// HW5_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <map>
#include<vector>
#include<iterator>
#include <cstdlib>
#include <string>

using namespace std;

string translate(vector<string> text);
int main()
{
	vector<string>text;
	string result;
	ifstream file("C:\\Users\\Yevgeniya\\Desktop\\example1.txt", ios::in);
	if (!file.is_open()) {
		cout << "Error" << endl;
	}
	else {
		int i = 0;
		while (getline(file,result)) {
			text[i] = result;
			i++;
		}
		file.close();
		//result = translate(text);
		for (int i = 0; i < text.size(); i++) {
			cout << text[i] << endl;
		}
		//cout << result << endl;
	}
	return 0;
}
string translate(vector<string> text) {
	string result = "";

	map<char, char*>dictionary = {
		{ 'A',".-" },
		{ 'B',"-..." },
		{ 'C',"-.-." },
		{ 'D',"-.." },
		{ 'E',"." },
		{ 'F',"..-." },
		{ 'G',"-.." },
		{ 'H',"...." },
		{ 'I',".." },
		{ 'J',".---" },
		{ 'K',"-.-" },
		{ 'L',".-.." },
		{ 'M',"--" },
		{ 'N',"-." },
		{ 'O',"---" },
		{ 'P',".--." },
		{ 'R',".-." },
		{ 'S', "..." },
		{ 'T', "-" },
		{ 'U', "..-" },
		{ 'W',".--" },
		{ 'V',"...-" },
		{ 'X',"-..-" },
		{ 'Y',"-.-" },
		{ 'Z',"--.." },
		{ '1',".----" },
		{ '2',"..---" },
		{ '3',"...--" },
		{ '4',"....-" },
		{ '5',"....." },
		{ '6',"-...." },
		{ '7',"--..." },
		{ '8', "---.." },
		{ '9', "----." },
		{ '0', "---" },
		{ ' ',".-.-.-" }
	};
	/*while (*text) {
		for (const auto&pair : dictionary) {
			if (*text == pair.first) {
				result.append(pair.second);
			}
		}
		text++;
	}*/
	return result;
}
