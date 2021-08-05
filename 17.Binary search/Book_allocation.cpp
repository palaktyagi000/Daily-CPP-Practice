#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int curr_min){
	int studentUsed =1;
	int pages_reading = 0;

	for(int i=0;i<n;i++){

		//Not required
		if(pages_reading + arr[i]> curr_min){
			studentUsed++;

			pages_reading = arr[i];
			if(studentUsed>m){
				return false;
			}
		}
		else{
			pages_reading += arr[i];
      		}

	}

}

int findPages(int arr[], int n, int m){
	int sum = 0;

	//if N<M
	if(n<m){
		return -1;
	}

	//count the no of pages
	for(int i=0;i<n;i++){
		sum += arr[i];
	}

	int s = arr[n-1];
	int e = sum;
	int ans = INT_MAX ;

	while(s<=e){
		int mid = (s+e)/2;

		if(isPossible(arr, n, m, mid)){
			ans = min(ans , mid);
			e = mid - 1;
		}
		else{
			//it is not possible to divide at x pages
			//increase the no. of pages
			s = mid + 1;
		}
	}
	return ans;
}

int main(){

	int t;
	cin>>t;

	for(int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;

		int arr[1000];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}

		cout<<findPages(arr, n, m)<<endl;
	}

	return 0;
}