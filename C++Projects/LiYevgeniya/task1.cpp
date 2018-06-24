//Li Yevgeniya
/*
There are three two-dimensional points: X=(x1,x2), Y=(y1,y2) and Z=(z1,z2). They define a triangle T.
1. In the function main() read abscissas and ordinates of points X, Y, Z (Coordinates are of the type double).
2. Function main() should display on the screen the computed ratio : shortest size of a triangle T/ sum of 
the remaining sizes of a triangle T.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
double compute(double a, double b);
int main() {
	double x1, x2, x3, y1, y2, y3;
	cout << "Enter a coordinate x1" << endl;
	cin >> x1;
	cout << "Enter a coordinate x2" << endl;
	cin >> x2;
	cout << "Enter a coordinate x3" << endl;
	cin >> x3;
	cout << "Enter a coordinate y1" << endl;
	cin >> y1;
	cout << "Enter a coordinate y2" << endl;
	cin >> y2;
	cout << "Enter a coordinate y3" << endl;
	cin >> y3;
	double a = x2 - x1;
	double b = y2 - y1;
	double res1 = compute(a, b);
	a = x3 - x1;
	b = y3 - y1;
	double res2 = compute(a, b);
	a = x3 - x2;
	b = y3 - y2;
	double res3 = compute(a, b);
	double sum = res1 + res2 + res3;
	double r1 = res1 / sum;
	double r2 = res2 / sum;
	double r3 = res3 / sum;
	if(r1>r2){
              if(r1>r3){
                        cout<<"Result is "<<r1<<endl;
                        }else{
                              cout<<"Result is "<<r3<<endl;
                              }
              }
    else{
         if(r2>r3)cout<<"Result is "<<r2<<endl;
         else cout<<"Result is "<<r3<<endl;
         }
         system("pause");
	
}
double compute(double a, double b) {
	double res = sqrt(pow(a, 2) + pow(b, 2));
	return res;
}
