#include<iostream>
using namespace std;

int main(){
	int n;
	std::cin>>n;
	string octal = "";
	while(n!=0){
		int r = n%8;
		n/=8;
		char c = r + '0';
		octal = c + octal;
	}
    std::cout<<octal<<std::endl;
	return 0;
}