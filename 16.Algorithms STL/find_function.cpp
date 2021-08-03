#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr)/sizeof(int);

    //Search ---> Find
    int key = 11;
    auto it = find(arr, arr + n, key);
    cout<<it<<endl;
    int index = it - arr;
    if(index==n){
    	cout<<key<<" not present";
    }
    else{
    	cout<<"Present at index "<<index;
    }
    
	return 0;
}