


template<typename T>
class Vector{

	int cs;
	int ts;
	T *arr;

public:
	Vector(){
		cs = 0;
		ts = 1;
		arr = new T[ts];
	}
	void push_back(const T d){
		if(cs == ts){
			//Array if full
			T *oldArr = arr;
			arr = new T[2*ts];
			ts = 2*ts;
			for(int i=0;i<cs;i++){
				arr[i] = oldArr[i];
			}
			//clear the old memory
			delete [] oldArr;
		}

		arr[cs] = d;
		cs++;
	}

	void pop_back(){
		cs--;
	}

	T front() const{
		return arr[0];
	}

	T back() const{
		return arr[cs-1];
	}

	bool empty() const{
		return cs == 0; 
	}

	int capacity() const{
		return ts;
	}

	T at(const int i){
		return arr[i];
	}

	T size() const{
		return cs;
	}
    
    //operator overloading
    auto operator[](const int i){
    	return arr[i];
    }

    

};