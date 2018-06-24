/*Write a program with a char table with the text: sandra cares for a cinnabar mastiff.
Program should check the number of characters with odd ASCII*/

#include <iostream>

using namespace std;

int main ()
{
	char text[]="sandra cares for a cinnabar mastiff";
	unsigned counter=0;
	for(int i=0;i<=32;i++)
	if(text[i]%2)
	{
		cout<<text[i]<<"  "<<(int)text[i]<<endl;	
		counter++;
	}
	cout<<"There are "<<counter<<" characters with odd ASCII code"<<endl;
}
