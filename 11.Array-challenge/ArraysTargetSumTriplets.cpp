#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
void sum_triplets(int a[], int n, int target){
	int i=0;
	int left=1;
	int right=n-1;
	while(i<n){
		while(left<right){
			if(a[left]+a[right]+a[i]==target){
				cout<<a[i]<<", "<<a[left]<<" and "<<a[right];
				right--;
				left++;
			}
			else if(a[left]+a[right]+a[i]>target){
				right--;
			}
			else{
				left++;
			}
		}
		i++;
	}

}
*/
int main(){

	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int target;
	cin>>target;

	sort(a, a+n);
    

    for(int i=0;i<n;i++){
    int left=i+1;
	int right=n-1;
		while(left<right){
			if(a[left]+a[right]+a[i]==target){
				cout<<a[i]<<", "<<a[left]<<" and "<<a[right];
				right--;
				left++;
			}
			else if(a[left]+a[right]+a[i]>target){
				right--;
			}
			else{
				left++;
			}
		}
	}

	return 0;
}