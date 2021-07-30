#include<iostream>
#include<numeric>
using namespace std;

const int MAX = 1000;

int minFare(int c1, int c2, int c3, int freq[], int num)
{
	int cost =0;
	for(int i=0;i<num;i++){
		cost+= min(c2, freq[i]*c1);
	}

	int minFare = min(c3, cost);
	return minFare;
}

int minSum(int c1, int c2, int c3, int c4, int rickshaws[], int cabs[], int n, int m)
{
	int rickFare = minFare(c1, c2, c3, rickshaws, n);
	int cabFare = minFare(c1, c2, c3, cabs, m);

	int minFare = min(rickFare + cabFare, c4);
	return minFare;
}

int main(){

	int testCases;
	cin>>testCases;

	while(testCases>0){
		int c1, c2, c3, c4;
		cin>>c1>>c2>>c3>>c4;

		int n, m;
		cin>>n>>m;

		int rickshaws[MAX];
		int cabs[MAX];

		for(int i=0;i<n;i++){
			cin>>rickshaws[i];
		}

		for(int i=0;i<m;i++){
			cin>>cabs[i];
		}

		int result = minSum(c1, c2, c3, c4, rickshaws, cabs, n, m);

		cout<<result;
		cout<<"\n";

		testCases--;
	}
}