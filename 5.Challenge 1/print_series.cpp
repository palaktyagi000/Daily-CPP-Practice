#include<iostream>
using namespace std;

int main(){
	int N1, N2;
	cin>>N1>>N2;
	int n = 1;
	int count = 1;
	while(count<=N1){
		int ans = 3*n + 2;
		if(ans%N2!=0){
			cout<<ans<<endl;
			count+=1;}
		n+=1;

	}

	
	return 0;
}