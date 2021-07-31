#include<iostream>
using namespace std;

int main(){

    char a[100][100];

	//Read a list of string and we will store them in a 2d char array
	int n;
	cin>>n;

	cin.get();
	for(int i=0;i<n;i++){
		cin.getline(a[i], 100);
	}

	//Print out all the strings
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;

	}


	return 0;
}