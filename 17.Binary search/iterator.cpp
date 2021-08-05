#include<iostream>
#include<cstring>
#include<list>
using namespace std;

//Linear Search
template<typename T>
int search(T arr[], int n, T key){

    for(int p=0;p<n;p++){
    	if(arr[p]==key){
    		return p;
    	}
    }
    //return n if element not found
    return n;

}


//template<class A, class B>

template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key){
    while(start!=end){
        if(*start==key){
            return start;
        }
        start ++;
    }
    return end;
}

int main(){
    /*
	int a[] = {1, 2, 3, 4, 10, 12};
	int n = sizeof(a)/sizeof(int);
	int key = 10;
    cout<<search(a,n,key)<<endl;
    */
 
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);

    auto it = search(l.begin(), l.end(),5);
    if(it == l.end()){
        cout<<"Element not present";
    }
    else{
        cout<<*it<<endl;
    }

	return 0;
}