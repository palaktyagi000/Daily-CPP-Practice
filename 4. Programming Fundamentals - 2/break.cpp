#include<iostream>
using namespace std;

int main(){
	//Break - that is used to stop a loop based upon certain condition
	//Read a stream of numbers until you get a multiple of 7
	int no;

	while(true){
		//No stopping condition as of now
		cin>>no;
		if(no%7==0){
			break;//take you line 16
			//continue;
		}
		if(no%13==0){
			continue;
		}
		cout<<"No "<<no<<endl;
	}
	cout<<"came out of the loop"<<endl;




	return 0;

}