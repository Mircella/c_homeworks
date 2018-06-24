//Li Yevgeniya
/*
Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)
*/
#include <cstdlib>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double calculate(double);
int main() {
	double a,b;
	while(true){
		cout<<"Enter a number of furlongs: "<<endl;
		cin>>a;
		if(cin.fail()||a<0){
		cout<<"Error"<<endl;	
		}else{
			b=calculate(a);
			cout<<b<<endl;
			break;
		}
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		}

    return 0;
}
double calculate(double a){
	return a*220;
}
