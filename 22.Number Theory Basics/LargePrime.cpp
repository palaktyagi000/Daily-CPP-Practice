#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

const int n = 10000000;
bitset<10000005> b;
vector<int> primes;


void sieve(){

	//set all bbits 
	b.set(); //1,1,1,1,1,....

	b[0] = b[1] = 0;

	for(long long int i = 2; i<=n; i++){
		if (b[i]){
			primes.push_back(i);
			for (long long int j=i*i; j<=n; j=j+1){
				b[j] = 0;
			}
		}
	}
}

bool isPrime(long long No){
	if(No<=n){
		return b[No]==1?true:false;
	}

	for(long long int i=0; primes[i]*(long long)primes[i] <= No; i++){
		if(No%primes[i]==0){
			return false;
		}
	}
	return true;
}







int main(){

	sieve();
	//2147483647
	if (isPrime(2147483647)) {
		cout<<"yes it is ";
	}
	else{
		cout<<"No its not!";
	}

	return 0;
}