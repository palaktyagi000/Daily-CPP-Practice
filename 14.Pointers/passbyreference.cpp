#include<iostream>
using namespace std;

//Pass by value
void increment(int a){
	a = a + 1;
	cout<<"Inside Function "<<a<<endl;
}

//Pass by Reference using Pointers
void increment2(int * aptr){
	*aptr = *aptr + 1;
	cout<<"Inside Function "<<*aptr<<endl;
}

int main(){

	int a=10;
	increment2(&a);
	cout<<"Inside Main: "<<a;


	return 0;
}