#include<iostream>
using namespace std;

int main(){
	unsigned long long int i;
	int n;
	cin>>n;
	unsigned long long int num[n];
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(i=0;i<n;i++){
		int sum_even =0, sum_odd=0;
		while(num[i]!=0){
			int t = num[i]%10;
		if(t%2==0){
			sum_even = sum_even + t;
		}
		else if(t%2==1){
			sum_odd = sum_odd + t;
		}
		num[i] = num[i]/10;
        }
        if(sum_even%4==0 || sum_odd%3==0){
        	cout<<"Yes"<<endl;
        }
        else{
        	cout<<"No"<<endl;
        }
		

	}

	return 0;
}