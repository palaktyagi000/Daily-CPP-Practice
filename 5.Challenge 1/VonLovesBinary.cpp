//Convert Binary number into its decimal representation
#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	int num[n];
	for(int i = 0; i < n; i++){
		cin>>num[i];
	}
	int sum = 0, power = 1;
	for(int i=0;i<n;i++){
		while(num[i]!=0){
			int t;
			t = num[i]%10;
			sum = sum + t*power;
			num[i] = num[i]/10;
			power = power*2;
		}
		cout<<sum<<endl;
		sum = 0;
		power=1;
	}

	return 0;
}