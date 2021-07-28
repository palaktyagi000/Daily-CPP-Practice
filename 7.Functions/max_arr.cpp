#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[1000];
	int cumSum[1000] = {0};

	int max_sum = 0;
	int curr_sum = 0;

	int left = -1;
	int right = -1;

    cin>>a[0];
    cumSum[0] = a[0];

	for(int i=1;i<n;i++){
		cin>>a[i];
		cumSum[i] = cumSum[i] + a[i];
	}

	//Generate all subarrays
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			//elements of subarray(i,j)
			curr_sum = 0;
			curr_sum = cumSum[j] - cumSum[i-1];
			
			if(curr_sum>max_sum){
				max_sum = curr_sum;
				left = i;
				right = j;
			
			}
			//cout<<curr_sum<<endl;
		}
	}
	//Print the maximum sum
	cout<<"Maximum sum is "<<max_sum<<endl;

    //Print the subarray
    for(int k=left;k<=right;k++){
    	cout<<a[k]<<",";
    }

	return 0;
}