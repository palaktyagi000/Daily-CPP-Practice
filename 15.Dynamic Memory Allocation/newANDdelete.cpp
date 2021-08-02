#include<iostream>
using namespace std;

int main(){

	//Allocation + Deallocation by compiler
	int b[100];
	cout<<sizeof(b)<<endl;
	cout<<b<<endl; //symbol table
	//here b can't be overwritten, b is a part of Read only Memory

	//Dynamic Allocation (on the fly)
	int n;
	cin>>n;
	int *a = new int[n]{0};
	cout<<sizeof(a)<<endl;
	cout<<a<<endl; //variable a that is created inside the static memory -> Overwritten
	// a = new char[30]


    //No change
	for(int i=0;i<n;i++){
		cin>>a[i];
		cout<<a[i]<<" ";
	}

    //Free up space
    delete [] a;

	return 0;
}