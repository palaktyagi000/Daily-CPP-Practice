#include<iostream>
using namespace std;

int main(){
	//Program to find sum of numbers from 1 to N
	int n;
	//take input
	cin>>n;


   //init condition
	int i = 1;
	int sum = 0;

	while(i<=n){ //stopping criteria
		sum = sum + i;
		i = i + 1; //update statement

	}
	cout<<sum<<endl;

	return 0;


}