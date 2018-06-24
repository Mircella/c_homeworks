//Li Yevgeniya
/*
Write a C++ program that uses three user-defined functions (counting main() as one) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines, and the remaining function, also called twice, should produce the remaining output.
*/
#include <cstdlib>
#include <iostream>
using namespace std;
void first_func();
void second_func();
int main() {
	for(int i=0;i<2;i++){
		first_func();
	}
	for(int i=0;i<2;i++){
		second_func();
	}
	return 0;
}
void first_func(){
    cout<<"Three blind mice"<<endl;
}

void second_func(){
	cout<<"See how they run"<<endl;
}
