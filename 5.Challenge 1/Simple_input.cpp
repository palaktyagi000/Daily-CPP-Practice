#include<iostream>
using namespace std;

int main(){
	/*
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
*/
	int n;
	cin>>n;
	int num[n];
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum + num[i];
		if(sum>=0){
			cout<<num[i]<<endl;
		}
		else{
			break;
		}

		}

	return 0;
}