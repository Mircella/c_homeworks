//Li Yevgeniya
/*
Write a program that has main() call a user-defined function that takes a Celsius temperature value as an argument and then returns the equivalent Fahrenheit value. The program should request the Celsius value as input from the user and display the result, as shown in the following code:
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
For reference, here is the formula for making the conversion:
Fahrenheit = 1.8   degrees Celsius + 32.0
*/
#include <cstdlib>
#include <iostream>
using namespace std;
double calculateTemp(double);
int main() {
	double a,b;
	cout<<"Please enter a Celsius value: "<<endl;
    cin>>a;
	    b=calculateTemp(a);
	    cout<<a<<" degrees Celsius is "<<b<<" degrees Fahrenheit."<<endl;

    return 0;
}
double calculateTemp(double a){
	return 1.8*a+32.0;
}
