#include<iostream>
using namespace std;

int main(){
	//Add the digit of the number to find sum
	int n;
	cin>>n;
	int sum=0; //initialisation

	while(n>0){
		int last_digit = n %10;
		sum = sum + last_digit;

		//update statement
		n=n/10;
	}

	//Print the ans 
	cout<<"Sum of Digits is "<<sum<<endl;



	return 0;
}