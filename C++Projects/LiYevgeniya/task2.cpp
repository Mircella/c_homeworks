//Li Yevgeniya
/*
An integer array int a[ ] of the size n is given. Assume n even.
Write a function
int funkcja2(int a[ ], int n)
returning such an index k (of the range 0 through n-2) that the condition:
a[k]+..+a[k+n/2-1] = sum of remaining values of ythe array a[ ].
is fulfilled. If such a k does not exist, the function should return (-1).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int function(int a[],int n);
int main() {
	srand(time(NULL));
	const int n = 4;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10 + 1;
	}
	cout<<"Result is "<<function(a,n)<<endl;
	cin.get();
}
int function(int a[], int n) {
	int t = n / 2 - 1;
	int result1 = 0;
	int result2 = 0;
	int generalSum = 0;
	int index;
	cout << "Numbers of array " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	for (int i = 0; i < n; i++) {
		generalSum += a[i];
	}
	for (int i = 0; i < n-t; i++) {
		index = i;
	    result1 = 0;
		for (int k = index; k <= i+t; k++) {
			result1 += a[k];
		}
		result2 = generalSum - result1;
		cout << "result1 " << result1 << " result2 " << result2 <<" index "<<index<< endl;
		
		if (result1 == result2) {
			return index;
		}
	}
	return -1;
}
