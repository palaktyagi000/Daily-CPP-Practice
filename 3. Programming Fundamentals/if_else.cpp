#include<iostream>
using namespace std;
//Conditional Statements in C++
int main(){
	int n;
	cin>>n;

	//Program to check if a number is divisible by 2, div by 3 and both
	//if else-if else
	//else-if block if you want only one block to be executed


	if(n%2==0 and n%3==0){
		cout<<n<<" is div by 2 and 3"<<endl;
		cout<<"if block!";
	}
	//all other blocks which is executed are skipped

	else if(n%2==0){
		cout<<n<<" is div by 2"<<endl;
		cout<<"else if block!";
	}



	else if(n%3==0){
		cout<<n<<" is div by 3"<<endl;
		cout<<"else if block!";

	}
	else{
		cout<<"Not Divisible!"<<endl;
		cout<<"Else Block"<<endl;
	}






	return 0;
}