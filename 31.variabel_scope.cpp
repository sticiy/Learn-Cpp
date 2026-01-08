#include<iostream>
using namespace std;
//global scope
int x = 10;

int ambil_global(){
	return x;
}

int x_local(){
	int x = 5;
	return x;
}

main(){
	cout<<"variabel global : "<<x<<endl;
	int x = 8;
	cout<<"variabel lokal main : "<<x<<endl;
	cout<<"variabel ambil global : "<<ambil_global()<<endl;
	cout<<"x_local : "<<x_local()<<endl;
}
