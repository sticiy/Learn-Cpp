//kalkulator sederhana
#include<iostream>
using namespace std;

main(void)
{
	float a,b;
	char aritmatika;
	
	cout<<"PROGRAM KALKULATOR"<<endl;
	//memasukan nput dari user
	cout<<"masukkan nilai 1 : ";
	cin>>a;
	cout<<"pilih operator : ";
	cin>>aritmatika;
	cout<<"masukkan nilai 2 : ";
	cin>>b;
	
	
	//proses
	cout<<"HASIL PERHITUNGAN\n";
	
	switch(aritmatika){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break; 
	}
	
	cin.get();
	return 1;
	
}
