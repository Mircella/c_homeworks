/*Write a program with a char table with the text:
alice has got a vermilion cheetah.
Program should check the number of characters with even ASCII*/

#include <iostream>

using namespace std;

int main ()
{
	char text[]="alice has got a vermilion cheetah";
	unsigned counter=0; 
	for(int i=0;i<33;i++)
	if(!(text[i]%2))
	{
		cout<<text[i]<<"  "<<(int)text[i]<<endl;	
		counter++;
	}
	cout<<"There are "<<counter<<" characters with even ASCII code"<<endl;
}
