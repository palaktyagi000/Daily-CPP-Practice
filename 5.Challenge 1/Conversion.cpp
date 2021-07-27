//Conversion (Fahrenheit to celsius)
#include<iostream>
using namespace std;

int main(){
	int max_F, min_F, step;
	cin>>min_F>>max_F>>step;
	int C;
	while(min_F<=100){
        C = (5 * (min_F - 32))/9;
        cout<<min_F<<"  "<<C<<endl;
        min_F = min_F + step;

	}


	return 0;
}