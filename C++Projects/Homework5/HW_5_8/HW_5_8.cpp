// HW_5_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <map>
#include<vector>
#include<iterator>
#include <cstdlib>
#include <string>
using namespace std;
struct Astrology {
	char* title;
	time_t start;
	time_t finish;
	bool check(time_t first, time_t end,time_t userTime) {
		double comparator = difftime(userTime, first);
		double comparator2 = difftime(end, userTime);
		if ((comparator>0)&(comparator2 > 0)){
			return true;
		}
		return false;
	}
};
Astrology* createArray();
bool equals(string first, string second);

int main()
{
	Astrology* astrologyArray = createArray();
	time_t now = time(NULL);
	tm* data = localtime(&now);
    int day;
	int month;
	char input[16];
	vector<string>lines;
	string temp = "";
	cout << "Enter your birth date (format: day month):" << endl;
	cin.getline(input,16);
	for (int i = 0; i < strlen(input)+1; i++) {
			temp.push_back(input[i]);
			if (input[i] == ' '||input[i]=='\0') {
				lines.push_back(temp);
				temp = "";
			}
	}
	
	if (lines.size() == 2) {
		if (equals(lines[1],"January")) {
			month = 0;
		}
		else if (equals(lines[1], "February")) {
			month = 1;
		}
		else if (equals(lines[1], "March")) {
			month = 2;
		}else if (equals(lines[1], "April")) {
			month = 3;
		}else if (equals(lines[1], "May")) {
			month = 4;
		}else if (equals(lines[1], "Juny")) {
			month = 5;
		}
		else if (equals(lines[1], "July")) {
			month = 6;
		}
		else if (equals(lines[1], "August")) {
			month = 7;
		}
		else if (equals(lines[1], "September")) {
			month = 8;
		}
		else if (equals(lines[1], "October")) {
			month = 9;
		}
		else if (equals(lines[1], "November")) {
			month = 10;
		}
		else if (equals(lines[1], "December")) {
			month = 11;
		}
		else {
			cout << "Incorrect input" << endl;
			
		}
		
		day = atoi(lines[0].c_str());
		cout << "Data " << day << " " <<lines[1] <<month << endl;
	}
	if(lines.size()>=3) {
		cout << "Incorrect input" << endl;
	}

	
    return 0;
}

Astrology* createArray() {
	Astrology astrologyArray[12];
	time_t now = time(NULL);
	tm* data = localtime(&now);
	data->tm_mon = 2;
	data->tm_mday = 21;
	time_t date = mktime(data);
	tm* data2 = localtime(&now);
	data2->tm_mon = 3;
	data2->tm_mday = 19;
	time_t date2 = mktime(data2);
	astrologyArray[0] = { "Aries",date,date2};
	data->tm_mon = 3;
	data->tm_mday = 20;
	date = mktime(data);
	data2->tm_mon = 4;
	data2->tm_mday = 20;
	date2 = mktime(data2);
	astrologyArray[1] = { "Taurus",date,date2};
	data->tm_mon = 4;
	data->tm_mday = 21;
	date = mktime(data);
	data2->tm_mon = 5;
	data2->tm_mday = 20;
	date2 = mktime(data2);
	astrologyArray[2] = { "Gemini",date,date2};
	data->tm_mon = 5;
	data->tm_mday = 21;
	date = mktime(data);
	data2->tm_mon = 6;
	data2->tm_mday = 22;
	date2 = mktime(data2);
	astrologyArray[3] = { "Cancer",date,date2};
	data->tm_mon = 6;
	data->tm_mday = 23;
	date = mktime(data);
	data2->tm_mon = 7;
	data2->tm_mday = 22;
	date2 = mktime(data2);
	astrologyArray[4] = { "Leo",date,date2};
	data->tm_mon = 7;
	data->tm_mday = 23;
	date = mktime(data);
	data2->tm_mon = 8;
	data2->tm_mday = 22;
	date2 = mktime(data2);
	astrologyArray[5] = { "Virgo",date,date2};
	data->tm_mon = 8;
	data->tm_mday = 23;
	date = mktime(data);
	data2->tm_mon = 9;
	data2->tm_mday = 22;
	date2 = mktime(data2);
	astrologyArray[6] = { "Libra",date,date2};
	data->tm_mon = 9;
	data->tm_mday = 23;
	date = mktime(data);
	data2->tm_mon = 10;
	data2->tm_mday = 21;
	date2 = mktime(data2);
	astrologyArray[7] = { "Scorpio",date,date2};
	data->tm_mon = 10;
	data->tm_mday = 22;
	date = mktime(data);
	data2->tm_mon = 11;
	data2->tm_mday = 21;
	date2 = mktime(data2);
	astrologyArray[8] = { "Sagittarius",date,date2};
	data->tm_mon = 11;
	data->tm_mday = 22;
	data->tm_year = 2017;
	date = mktime(data);
	data2->tm_mon = 0;
	data2->tm_mday = 19;
	data2->tm_year = 2018;
	date2 = mktime(data2);
	astrologyArray[9] = { "Capricorn",date,date2 };
	data->tm_mon = 0;
	data->tm_mday = 20;
	date = mktime(data);
	data2->tm_mon = 1;
	data2->tm_mday = 18;
	date2 = mktime(data2);
	astrologyArray[10] = { "Aquarius",date,date2 };
	data->tm_mon = 1;
	data->tm_mday = 19;
	date = mktime(data);
	data2->tm_mon = 2;
	data2->tm_mday = 20;
	date2 = mktime(data2);
	astrologyArray[11] = { "Pisces",date,date2 };
	
	return astrologyArray;
}
bool equals(string first, string second){
if (first.size() != second.size()) {
	return false;
}
for (int i = 0; i < first.size(); i++) {
	if (first[i] != second[i]) {
		return false;
	}
}
return true;
}