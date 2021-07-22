#include<iostream>
using namespace std;

int main(){
	//You are given N, followed by list of N numbers
	//Output : The squares of N number
	/* 

	Input File
    3 N
	1 Current no.
	2
	5

	Output File
	1 Ans 
	4
	25
	*/

	int N;
	cin>>N;

	int no;
	while(N>0){
		cin>>no;
		cout<<no*no<<endl;

		N = N - 1;

	}

  
	return 0;
}

