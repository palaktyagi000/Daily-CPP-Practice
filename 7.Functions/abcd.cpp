#include<iostream>
using namespace std;

//Print the following pattern for given N = 5
/*
ABCDE
ABCD
ABC
AB
A
*/

void printABCDpattern(int n){

	for(int i=1;i<=n;i++){
		int cnt_alphanets = n-i + 1;
		char alphabet = 'A';
		for(int j=1;j<=cnt_alphanets;j++)
		{
			cout<<alphabet;
			alphabet = alphabet + 1;
		}
       cout<<endl;
	}
}



int main(){
	int n;
	cin>>n;
	printABCDpattern(n);

	return 0;
}