#include<iostream>
using namespace std;

int main(){
	//Comma Operator
	int a, b, c;

	//Assignment Operator
	a = 10;
	b = 20;
	c = 30;

	//Logical Operator
	if(c>a and c>b){
		cout<<"C is Largest"<<endl;
	}

	//Ternary operator
	int x = c%2==0 ? 1 : 0;
	cout<<x<<endl;
	c%2==0?cout<<"Even":cout<<"odd";

	//Bitwise operator
	x = 5;
	int y = 7;
	cout<<"AND "<<(x&y)<<endl;
	cout<<" Or "<<(x|y)<<endl;
	cout<<"XOR "<<(x^y)<<endl;

	//shift operator
	x = x<<2;
	cout<<x<<endl;
	cout << (y >> 1) << endl; 

	//Unary operator
	cout<<(&x)<<endl; //Address of

	a=10;
	int z = a++;
	cout<<z<<endl;
	z=++a;
	cout<<z<<endl;

	//compound assigment operator
	a = 10;
	a*=3;
	cout<<a<<endl;
	a%=5;
	cout<<a<<endl;

	b=5;
	b<<=1;
	cout<<b<<endl;


	return 0;
}