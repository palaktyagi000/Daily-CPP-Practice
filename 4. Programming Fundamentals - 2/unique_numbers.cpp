#include<iostream>
using namespace std;

int main(){

	//Problem - Uniques Number 2N + 1
	//Given a list of numbers where every numbers occurs twice except one, find
	//a ^ a = 0
	//a ^ b ^ c ^ a ^ c = b
	int n;
	cin>>n;

	int no;
	int ans = 0;

    //Bitwise XOR operator to solve;
    //Helped to not waste space
	for(int i=0;i<n;i++){
		cin>>no;
		ans = ans ^ no;
	}
	cout<<ans<<endl;


	return 0;
}