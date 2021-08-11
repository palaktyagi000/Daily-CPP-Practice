#include<iostream>
using namespace std;

int main(){

      //Array of fixed size
	  int cnt[64] = {0};

	  int n;
	  cin>>n;

	  int no;


	  for(int i = 0; i<n;i++){
	  	cin>>no;
	  	//Update the cnt array bhy extracting bits 
	  	int j = 0;
	  	while(no>0){
	  		int last_bit = (no&1);
	  		cnt[j] += last_bit;
	  		j++;
	  		no = no>>1;
	  	}


	  }
	  //iterate over the array and form the answer by converting binary to ddecimal
	  int p = 1;
	  int ans = 0;
	  for(int i=0;i<64;i++){
	  	cnt[i] %= 3;
	  	ans += (cnt[i]*p);
	  	p = p<<1;

	  }

	  //print the final answerr
	  cout<<ans<<endl;

	return 0;
}