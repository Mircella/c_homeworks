//Li Yevgeniya
/*
Write a program that has main() call a user-defined function that takes a distance in light years as an argument and then returns the distance in astronomical units. The program should request the light year value as input from the user and display the result, as shown in the following code: Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.
An astronomical unit is the average distance from the earth to the sun (about 150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this conversion factor:
1 light year = 63,240 astronomical units
*/
#include <cstdlib>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double calculate(double);
int main() {
	double a;
	bool c = true;
    while(c){
    cout<<"Enter the number of light years: "<<endl;
    cin>>a;
   	if(a>=0){
		c=false;
	    a=calculate(a);
	    cout<<"Your result is "<<a<<endl;
	}else{
		cout<<"Wrong input!"<<endl;
	}
	}
    return 0;
}
double calculate(double a){
	return a*63240;
}
