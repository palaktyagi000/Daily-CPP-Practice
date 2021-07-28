#include<iostream>
using namespace std;

int main(){
	int n, key;
	cin>>n;
    int i;
	int a[1000];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	//Ask for the element we want to search
	cout<<"Enter the element you want to search : ";
	cin>>key;

	//Find out the index of that element by traversing the array
	//Linear Search Algorithm
	for(int i=0;i<=n-1;i++){
		if(a[i]==key){
			cout<<key<<" found at "<<i<<" index";
			break;
		}
	}
	if(i==n){
		cout<<key<<" is not presemt "<<endl;

	}


	return 0;
}