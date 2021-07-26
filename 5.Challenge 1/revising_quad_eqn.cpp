#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
	float a, b, c;
	cin>>a>>b>>c;
	float d;
	float d1;
	float x1, x2;

	d = b*b - (4*a*c);
	d1 = sqrt(d);

	if(d==0){
		cout<<"Real and equal"<<endl;
	}
	else if(d>=0){
		cout<<"Real and Distinct"<<endl;
		x1 = (-b + d1)/(2*a);
		x2 = (-b - d1)/(2*a);
		cout<<x2<<" "<<x1<<endl;

	}
	else if(d<0){
		cout<<"Imaginary"<<endl;
	}

	//float x1, x2;
	//if(d)
	return 0;
}