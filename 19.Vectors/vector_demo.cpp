#include<iostream>
#include<vector>
using namespace std;

int main(){

	//You can create and initalise a vector

	vector<int> d{1,2,3,10,14};
	//Push back O(1) for most of the time
	d.push_back(16);

	//Pop Back /Removes the last element O(1)
	d.pop_back();

	//Insert some elements in the middle
	d.insert(d.begin() + 3, 4, 100);

	//erase some element in the middle
	d.erase(d.begin() + 2);
	d.erase(d.begin() + 2, d.begin()+5);

	//size
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;

	//we avoid the shrink
	d.resize(18); //if the size is increasing then more memory eill be allocated
    cout<<d.capacity()<<endl;

    //remove all the vector, doesn't delete the memory occupies
    d.clear();
    cout<<d.size()<<endl;

    //empty
    if(d.empty()){
    	cout<<"This is an empty vector";
    }
    cout<<endl;
    cout<<d.size()<<endl;

	for(int x:d){
		cout<<x<<",";
	}

    d.push_back(10);
    d.push_back(11);
    d.push_back(12);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    //Reserve
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
    	int no;
    	cin>>no;
    	v.push_back(no);
    	cout<<"Changing Capacity "<<v.capacity()<<endl;
    }

    //flaw - it will double the memory every time
    //to avoid doubling, we will use reserve function

    cout<<"Capacity "<<v.capacity()<<endl;

    for(auto x: v){
    	cout<<x<<",";
   }


     



	return 0;
    
}