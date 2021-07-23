#include<iostream>
using namespace std;

int main(){
/*
Primitive Datatypes
int , float, bool, double, char

*/
	int x = 5000;
	float y = 10.141;
	bool weather_is_rainy = true;
	double pi = 3.141133553;
	char ch = 'A';

/* How much memory each is going to occupy! */
    cout<<"Int "<<sizeof(x) << endl; //4
    cout<<"float "<<sizeof(y) << endl; //4

    cout<<"bool "<<sizeof(weather_is_rainy) << endl; //1
    cout<<"double "<<sizeof(pi) << endl; //8
    cout<<"Char "<<sizeof(ch) << endl; //1
     






    return 0;
}