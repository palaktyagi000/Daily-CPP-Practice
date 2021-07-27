/*
Problem Description:
Take the following as input.  
A number  
A digit  
Write a function that returns the number of times digit is found in the number. Print the value returned.
Input Format: Integer (A number) 
Integer (A digit)
Sample Input: 5433231 
3
Output Format: Integer (count of times digit occurs in the number)
Sample Output: 3
*/
#include<iostream>
using namespace std;

int main(){
	int N, digit;
	cin>>N>>digit;
	int no_times = 0;

	while(N!=0){
		int r = N%10;
		if(r==digit){
			no_times+=1;
		}
		N = N/10;
	}
	cout<<no_times<<endl;

	return 0;
}