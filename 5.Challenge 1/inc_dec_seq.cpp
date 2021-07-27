/*
Problem Description:
Given an array S of size N , check if it is possible to split sequence into two sequences -  
s<sub>1</sub> to s<sub>i</sub> and  s<sub>i+1</sub> to s<sub>N</sub>  such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.
Input Format: First line contains a single integer N denoting the size of the input.  <br>
Next N lines contain a single integer each denoting the elements of the array S.
Sample Input: 5 
1 
2 
3 
4 
5
Output Format: Print boolean output - "true" or "false" defining whether the sequence is increasing - decreasing or not.
Sample Output: true
*/
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i;
	int prev = INT_MAX;
	int curr, seq_no = 1;
	for(i=0;i<n;i++){
		cin>>curr;
		if(seq_no==1)//for strictly decreasing
		{
			if(prev<=curr)
			{
				seq_no++;
			}
		}
		else //for stricly decreasing
		{
			if(prev>=curr)
			{
				seq_no++;
				break;
			}
		}
        prev = curr;
	}




	return 0;
}