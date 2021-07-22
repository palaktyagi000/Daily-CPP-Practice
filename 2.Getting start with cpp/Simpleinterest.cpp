#include<iostream>
using namespace std;

int main(){
	//simple interest
	//Declare variable 
	int p, r, t;
	float si;

   /*Assigns values to the buckets (storage in the memory)
	p=100;
	r=20;
	t=1;
	*/
	cin>>p>>r>>t;
    
    //every statement shoukd be terminated by a semi-colon
	si=p*r*t/100.0;
	//interger/integer = integer 
	//float/integer = float
	//Typecasting ->Implicit 

	cout<<si<<endl;






	return 0;



}