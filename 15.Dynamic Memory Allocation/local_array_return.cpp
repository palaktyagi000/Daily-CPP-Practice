#include<iostream>
using namespace std;

int* fun(){

	int *a = new int[5];
	a[0] = 11;
	a[1] = 2;

	//int a[] = {1, 2, 3, 4, 5};
	cout<<a<<endl; //base address of array
	cout<<a[0]<<endl; //0th element of array
    
    //we should never return a local variable
	return a; //base address
}

int main(){

	int *b = fun();
	cout<<b<<endl; //base address
	cout<<b[0]<<endl;
  
    //let us clear the array a
    delete [] b;
 
	return 0;
}