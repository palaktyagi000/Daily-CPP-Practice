#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int sum = 0;
	int no;

	while(N>0){
		cin>>no;
		sum = sum + no;
		if(sum>=0){
			cout<<no<<endl;
		}
		else{
			break;
		}



	}


	return 0;
}