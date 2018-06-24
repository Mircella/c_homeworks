//Li Yevgeniya
/*
Write a program that asks the user to enter an hour value and a minute value. The main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
*/
#include <cstdlib>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printTime(int,int);
int main() {
	int a, b;
	bool c = true;
    while(c){
    cout<<"Enter the number of hours: "<<endl;
    cin>>a;
    cout<<"Enter the number of minutes: "<<endl;
    cin>>b;
	if((a>=0&&a<=24)&&(b>=0&&b<=60)){
		c=false;
	    printTime(a,b);
	}else{
		cout<<"Wrong input!"<<endl;
	}
	}
   	return 0;
}
void printTime(int a, int b){
	if(b<10){
		if(a==24){
			cout<<"0:0"<<b<<endl;
		} else
		cout<<a<<":0"<<b<<endl;
	}else{
		if(a==24){
			cout<<"0:"<<b<<endl;
		} else
		cout<<a<<":"<<b<<endl;		
	}
}

