/*Write a function checking if a components
of a given integer array form a palindromic number.*/

#include <iostream>

using namespace std;

bool pal(int tab[], int n);

int main ()
{
 int a[6]={3, 2, 1, 6, 2, 3}, b[7]={3, 2, 1, 6, 1, 2, 3};
 if(pal(a,6))cout<< "array a contains a palindorme";
 else cout<< "array a does not contain a palindrome";
 cout<<endl;
 if(pal(b,7))cout<< "array b contains a palindorme";
 else cout<< "array b does not contain a palindrome";
 cout<<endl;
}

bool pal(int arr[], int n)
{
	bool test=true;
	for(int i=0;i<n/2;i++)
	 {
	 	test=test&&(arr[i]==arr[n-1-i]);
	 	if(!test)return false;
	 }
	return test;
}
