#include <iostream>
#include "vector_class.h"
using namespace std;

int main(){

	Vector<char> v;
	v.push_back(71);
	v.push_back(72);
	v.push_back(93);
	v.push_back(94);
	v.pop_back();
	v.push_back(96);
	v.push_back(78);


	cout<<"Capacity "<<v.capacity()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}


	return 0;
}