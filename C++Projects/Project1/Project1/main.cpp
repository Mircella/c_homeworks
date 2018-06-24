
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;
//using namespace std::ios_base;
int main() {
	ofstream fout;
	//fout.open("C:\\Users\\Yevgeniya\\Desktop\\result.txt", ios_base::app);
	ifstream fin("C:\\Users\\Yevgeniya\\Desktop\\sample.txt");
	char word[256];
	if (!fin.is_open()) {
		cout << "Impossible to open the file" << endl;
	}
	else {
		cout << "OK" << endl;
		while (!fin.eof()) {
			
			fin>>word;
			cout << word << endl;
			//if(fin.eof())break;
		}
	}
	fin.close();
	
	system("pause");
}