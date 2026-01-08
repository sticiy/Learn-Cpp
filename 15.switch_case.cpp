#include<iostream>
using namespace std;
main()
{
	int a;
	
	cout<<"masukkan nilai : ";
	cin>> a;
	
	switch(a == 5){
		case true:
			cout<<"benar itu adalah 5"<<endl;
			
	}
	
		switch(a){
		case 1:
			cout<<"benar itu adalah 1"<<endl;
			break;
		case 10:
			cout<<"benar itu adalah 10"<<endl;
		case 100:
			cout<<"benar ini 100"<<endl;
		default:
			cout<<"default"<<endl;
			
	}
	
	cout<<"ini adalah akhir dari program\n";
}
