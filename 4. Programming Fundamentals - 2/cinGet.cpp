#include<iostream>
using namespace std;

int main(){
	//cin>> does not read white space
	char ch;
	//reads the first char
	ch = cin.get(); //this method reads any single char including spaces/newlines
	while(ch!='.'){
		//Print the last character that we have read
		cout<<ch;
		//update my char in the memory(read the next character)
		//reads the rest of the characters
		ch = cin.get();
	}




	return 0;
}