#include<iostream>
using namespace std;

void fungsi(int &b){
	b = 10;
	cout<<"Address b : "<<&b<<endl;
	cout<<"Nilai b : "<<b<<endl;
}

void kuadrat(int &ang, int &hasil){
	hasil = ang * ang;
}

main(){
	int a = 5;
	int hasil;
	cout<<"Address a : "<<&a<<endl;
	cout<<"Nilai a : "<<a<<endl;
	
	kuadrat(a,hasil);
	cout<<hasil;
	
}
