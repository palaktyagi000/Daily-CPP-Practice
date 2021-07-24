#include<iostream>
using namespace std;

int main(){
	//Problem - Find the Displacement
	char ch;
	ch = cin.get();

	int x = 0;
	int y = 0;
	while(ch!='\n'){
		if(ch== 'N' or ch=='n'){
			y++;
		}
		else if(ch=='S' or ch=='s'){
			y--;
		}
		else if(ch=='E' or ch=='e'){
			x++;
		}
		else if(ch=='W' or ch=='w'){
			x--;
		}
		else{
			cout<<"Invalid input"<<endl;
		}
		ch = cin.get();
		cout<<"Final Displacement is "<<x <<" and "<<y<<endl;
	}
	//ch = cin.get();
	//cout<<"Final Displacement is "<<x <<" and "<<y<<endl;
	return 0;
}
