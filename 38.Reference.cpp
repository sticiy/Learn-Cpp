#include<iostream>
using namespace std;


main(){
//	variable
	int a = 5;
	cout <<"Address a : "<<&a<<endl<<endl;
	
	int &b = a;
	cout<<"Address dari b : "<<&b<<endl;
	
	b = 10;
	cout<<b<<a<<endl;
}
