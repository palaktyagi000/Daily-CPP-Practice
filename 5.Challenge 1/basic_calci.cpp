#include<iostream>
using namespace std;

void operation(char ch){
	int N1;
	int N2;
	cin>>N1>>N2;
	switch(ch){
		case '+': cout<<N1 + N2 <<endl;
		        break;
		case '-': cout<<N1 - N2<<endl;
		        break;
		case '*': cout<<N1 * N2<<endl;
		        break;
		case '/': cout<<N1 / N2<<endl;
		        break;
		case '%': cout<<N1 % N2<<endl;
		        break;
	}
}

int main(){
     
    char ch;
    while((ch != 'x') && (ch != 'X')){
    	cin>>ch;
    	if((ch == '+' )||( ch == '-') || (ch == '*') || (ch == '/') || (ch == '%')){
    		operation(ch);
    	}
    	else{
    		if(ch != 'x' && ch != 'X')
    			cout<<"Invalid operation. Try again."<<endl;
    	}

    }
   
	return 0;
}