#include <iostream>
#include "vector_class.h"

int main(){

	Vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.pop_back();
	v.push_back(6);


	return 0;
}