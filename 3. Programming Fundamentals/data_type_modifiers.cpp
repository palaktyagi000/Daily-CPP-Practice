#include<iostream>
#include<climits>
using namespace std;

int main(){

	//Data Type Modifiers + Data types
	//long, short, signed, unsigned

	int x;

	cout<<sizeof(x)<<endl;
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;

	x = INT_MAX;

	//What will happen if you add 1 to x
	cout<<x<<endl;
	x = x + 1;
	cout<< x <<endl;








	return 0;
}