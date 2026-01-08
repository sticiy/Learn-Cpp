#include<iostream>
using namespace std;
//reporter
int pangkat(int x){
	int y;
	y = x*x; 
	return y;
}
//worker
void tampilkan(int input){
	cout<<"Menampilkan dengan void"<<endl;
	cout<<input<<endl;
}
main(){
	int input, hasil;
	cout<<"masukkan nilai kuadrat dari : ";cin>>input;
	hasil = pangkat(input);
	tampilkan(hasil);
}
