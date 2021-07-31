#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[100];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
   
    int target;
	cin>>target;

    int startpt = 0;
    int endpt = n-1;
    while(startpt<endpt){
    	if(a[startpt]+a[endpt] == target){
    		cout<<a[startpt]<<" and "<<a[endpt]<<endl;
    		startpt++;
    		endpt--;
    	}
    	else if(a[startpt]+a[endpt]<target)
    	{
    		startpt++;
    	}
    	else{
    		endpt--;
    	}
    }

    return 0;
}