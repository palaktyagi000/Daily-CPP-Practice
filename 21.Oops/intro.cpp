#include<iostream>
using namespace std;

//acess specifiers - public and private
//Publiv - acess outside the car
//Private - inside the class



//defining a new dataype;
class Car{//car is a datatype
    // just telling the object that we will have these
    //not allocating any memory

private:
	float price;



public:
	//float price;
	int model_no;
	char name[20];

	void print(){
		cout<<"Name "<<name<<endl;
		cout<<" Model no. "<<model_no<<endl;
		cout<<"Price "<<price<<endl;

	}

	float get_discounted_price(float x){
		return price*(1-x);
	}

	float apply_discount(float x){
		price = price*(1.0-x);
		return price;
	}

    void set_price(price p){
    	int msp = 111;
    	if(p>0){
    		price = p;
    	}
    	price = msp;
    }

    float get_price(){
    	return price;
    }


};

int main(){

	//create an object
	Car c;
	//c.price = 100;
	c.set_price(100);
    

	c.model_no = 112;
	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';

	//try to print 
	//cout<<c.name<<" Model no. "<<c.model_no<<" Price"<<c.price<<endl;
    
    //due to some mistake
    //c.price = -10;


    cout<<"Enter the discount you want to give ";
    float discount;
    cin>>discount;

    cout<<c.apply_discount(discount)<<endl;

    c.print();

	//cout<<sizeof(c)<<endl; //only memory occupied
	//cout<<sizeof(Car)<<endl;//car doesn't occupy memory

}