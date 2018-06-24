/*Write a function finding the length of the longest constant subsequence of a sorted integer array*/

#include<iostream>
using namespace std;

unsigned lcs(int tab[], unsigned n);

int main()
{ 
	int a[10]={1,1,2,3,3,3,3,4,4,6};
	cout<<"The longest constant subsequence of a has the length " << lcs(a,10)<<endl;
}

unsigned lcs(int tab[], unsigned n)
{
	int max=1;
  	for(int i=1; i<n; i++)if(tab[i]==tab[i-max])max++;
	return max;
}
