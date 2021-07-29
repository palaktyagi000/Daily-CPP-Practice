#include<iostream>
using namespace std;

int main(){

    int b[] = {'1', '2', '3'};
    cout<<b<<endl; //Get the address of array

	char a[10] = {'a', 'b', 'c','\0'};
    cout<<a<<endl; // get the contents (special behaviour) // unless you find the null
    
    //Input 
    char s[10];
    cin>>s;
    cout<<s;

    //Input 
    char s1[] = {'h','e','l','l','o'};
    char s2[] = "hello";

    cout<<s1<<" "<<sizeof(s1)<<endl; //5 bytes
    cout<<s2<<" "<<sizeof(s2)<<endl; //6 bytes

	return 0;
}