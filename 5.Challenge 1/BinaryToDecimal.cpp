#include<iostream>
using namespace std;

int main(){
	unsigned long long int num;
	cin>>num;
	unsigned long long int ans = 0;
	int pow = 1;
	while(num!=0){
		int digit = num%10;
		ans = ans + digit * pow;
		num = num/10;
		pow = pow * 2;
	}
	cout<<ans<<endl;


	return 0;
}