#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[] = {10, 20, 40, 40, 40, 60, 70};
    int n = sizeof(arr)/sizeof(int);

    //Search ---> Find
    int key;
    cin>>key;

    bool present = binary_search(arr, arr+n, key);
    if(present){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent!"<<endl ;
    }

    //Two more things
    //Get the index of the element 
    //lower_bound(s,e,key) and upper_bound(s,e,key)

    auto lb = lower_bound(arr, arr+n, 40);
    cout<<lb<<endl;
    cout<<"Lower bound of 40 is "<<(lb-arr)<<endl;
   
    //Make a call to binary search to check if element is present or not
    if((lb-arr) == n){
        cout<<"Element is not present"<<endl;
    }
  
    //upper bound
    auto ub = upper_bound(arr, arr+n, 40);
    cout<<"Upper bound of  40 is "<<(ub-arr)<<endl;

    cout<<"Occ Freq of 40 is "<<(ub-lb)<<endl;



    return 0;
} 