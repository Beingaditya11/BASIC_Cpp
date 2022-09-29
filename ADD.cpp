#include <iostream>
using namespace std;

	void ADD(int a,int b,int c);
	void ADD(int a,int b,int c){
		int d=(a+b+c);
		cout<<d<<endl;
	}
	
	int main(){
	int x,y,z,d;
	cout<<"ENTER THE NUMBER:"<<endl;
	cin>>x;
	cout<<"ENTER THE NUMBER:"<<endl;
	cin>>y;
	cout<<"ENTER THE NUMBER:"<<endl;
	cin>>z;
	
	
	ADD(x,y,z);
	return d;
	}
