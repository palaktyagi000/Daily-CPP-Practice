#include<iostream>
using namespace std;

int main(){
/*
	int x = 10;
	int y = 20;
  
    int *xptr;
    xptr = &x;

    cout<< &x<<endl;
    cout<<xptr<<endl;

    //Re-assign another address to the variable
    xptr = &y;
    cout<<&y<<endl;
    cout<<xptr<<endl;

 */

    //deferencing 
    int x =10;
    int *xptr;
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    cout<< *(&x) <<endl;
    cout<< *(xptr)<<endl;

    cout<<*(&xptr)<<endl;
    cout<<&(*xptr)<<endl;

    cout<<&xptr<<endl;
    //Double pointer
    int **xxptr = &xptr;
    cout<<xxptr<<endl;




	return 0;
}