#include<iostream>
using namespace std;

int main ()

{
int n;
cin>>n;
int sum;
sum=n;
if(n>=0){
	cout<<n<<endl;
}
while(sum>=0){
	int t;
	cin>>t;
	sum=sum+t;
	if(sum>=0){
		cout<<t<<endl;
	}
}
return 0;
}