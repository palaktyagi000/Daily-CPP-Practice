#include<iostream>
using namespace std;

/* Question - Print the Pattern
1
11
111
1001
11111
100001
*/
//Input is single interger N


int main(){

	int n;
	cin>>n;

	int row = 1;
	while(row<=n){
		int col =1;
		if(row%2!=0){
			//odd row
			while(col<=row){
				cout<<1;
				col = col + 1;
			}

		}
		else{
			//Even Row
			cout<<1;
			while(col<=row-2){
				cout<<0;
				col = col + 1;
			}
			cout<<1;


		}
		cout<<endl;
		row = row + 1;


	}

 


}