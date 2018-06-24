/*Write a program with a char table with the text: sandra cares for a cinnabar mastiff.
Program should check the number of characters with odd ASCII*/

#include <iostream>

using namespace std;

int main ()
{
	char text[]="sandra cares for a cinnabar mastiff";
	unsigned counter=0;
	char* wt=text;  // text is constant - is not l-value; wt is l-value
	wt=text;
	while(*wt++)if(*(wt-1)%2)counter++;
	cout<<"There are "<<counter<<" characters with odd ASCII code"<<endl;
	}
