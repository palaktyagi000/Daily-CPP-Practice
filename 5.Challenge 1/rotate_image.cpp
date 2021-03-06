#include<iostream>
using namespace std;

void display(int a[][100], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void rotate(int a[][100], int n){

	//reverse each row
	for(int row=0;row<n;row++){
		int start_col = 0;
		int end_col = n-1;
		while(start_col<end_col){
			swap(a[row][start_col], a[row][end_col]);
			start_col++;
			end_col--;
		}
	}

	//to take transpose
	for(int i=0;i<n;i++){
		for(int j=0;i<n;j++){
			if(i<j){
				swap(a[i][j], a[j][i]);
			}
		}
	}

}

void rotate_stl(int a[][100], int n){

}

int main(){ 

	int a[100][100] = {0};
	int n;
	cin>> n;

	//Iterate over the array
	int val=1;

	for(int row=0;row<=n-1;row++){
		for(int col=0;col<=n-1;col++){
			a[row][col] = val;
			val = val + 1;
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
    rotate(a, n);
    display(a, n);
    return 0;

}