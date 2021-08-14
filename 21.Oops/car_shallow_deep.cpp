#include<iostream>
#include<cstring>
using namespace std;

class Car{
  private:
  	float price;


  public:
  	int model_no;
  	char *name;
  	const int msp; //read only
   
    //Init list
  	Car():msp(99){
        cout<<"Inside copy Constructor"<<endl;
  		price = X.price;
  		model_no = X.model_no;
  		name = new char[strlen(X.name) + 1];
  		strcpy(name, X.name);{
  		name = NULL;
  	}
  	Car(float p, int m, char *n, int minprice):price(p), msp(minprice){
  		// price = p;
  		model_no = m;
  		name = new char[strlen(n)+1];
  		strcpy(name , n);
  	}

  	Car(Car &X){
  		cout<<"Inside copy Constructor"<<endl;
  		price = X.price;
  		model_no = X.model_no;
  		name = new char[strlen(X.name) + 1];
  		strcpy(name, X.name);
  	}

  	void operator=(Car &X){
  		cout<<"Inside copy Constructor"<<endl;
  		price = X.price;
  		model_no = X.model_no;
  		name = new char[strlen(X.name) + 1];
  		strcpy(name, X.name);
  	}

  	void setprice(float p){
  		price = p;
  	}

    void print(){
		cout<<"Name "<<name<<endl;
		cout<<"Model no. "<<model_no<<endl;
		cout<<"Price "<<price<<endl;

	} 

	~Car(){
		cout<<"Destroying car "<<name<<endl;
		if(name!=NULL){
			delete [] name;
		}
	}


};




int main(){
    //Static car
	Car c(100, 200,"BMW");//parameterised constructor
	cout<<c.msp<<endl;


	Car d;//copy constructor
	d = c;// copy assigment operator as many times 
	d.name[0] = 'A';


	d.setprice(400);

	c.print();
	d.print();

	//delete c;//it should get some address
    Car *e = new Car(10, 20, "Ferrari");//dynamic allocated memory

    //(*e).print()
    e->print();

    //delete keyword
    delete e;
    

	return 0;
}