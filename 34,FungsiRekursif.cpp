#include<iostream>
using namespace std;
//fungsi rekursif adalah fungsi yang mengulang dirinya sendiri


//fungsi rekursif terbatas
int pangkat(int a, int b){
	int hasil = a;
	for(int i=1; i < b; i++){
		hasil = hasil*a;
	}
	return hasil;
}

main(){
	int a;
	int b;
	cout<<"angka : ";cin>>a;
	cout<<"pangkat : ";cin>>b;
	cout<<"hasil iterasi = "<<pangkat(a,b)<<endl;
}
