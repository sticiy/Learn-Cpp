#include<iostream>
using namespace std;

int faktorial(int n);

main(){
	int inAngka;
	cout<<"Masukkan angka : ";cin>>inAngka;
	int hasil = faktorial(inAngka);
	cout<<hasil;
	return 0;
}

int faktorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return n * (n-1);
	}
}
