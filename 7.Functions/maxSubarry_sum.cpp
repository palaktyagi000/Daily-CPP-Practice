#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[1000];
	int max_sum = 0;
	int curr_sum = 0;

	int left = -1;
	int right = -1;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//Generate all subarrays
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			//elements of subarray(i,j)
			curr_sum = 0;
			for(int k=i;k<=j;k++){
				//cout<<a[k]<<",";
				curr_sum+=a[k];
			}
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