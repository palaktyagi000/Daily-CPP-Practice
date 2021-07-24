#include<iostream>
using namespace std;

//local scope
//global scope
int x = 100;

int main(){
	//scope -> defined for variables(acessible - ?)
	//lifetime and visibility
	int x = 10;
	cout<<x <<endl;

	for(x=0;x<=5;x++){
		cout<<x<<endl;
	}


	cout<<"Local X " <<x<<endl;//global x
	cout<<"global x "<<::x <<endl;
	//both local and global value x




	return 0;
}