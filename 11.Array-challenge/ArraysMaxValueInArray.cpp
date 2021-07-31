#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int max(long long int arr[], int n){
	int max = INT_MIN;
    long long int i;
	for(i=0;i<n;i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){

	int n;
	cin>>n;
	long long int i;
    long long int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}

    cout<<"Max is "<<max(arr, n);


	return 0;
}