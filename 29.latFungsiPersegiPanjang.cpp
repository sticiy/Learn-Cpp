#include<iostream>
using namespace std;
// fungsi luas pesergi panjang

double hitung_luas(double p, double l) {
	double luas = p * l;
	return luas;
}
// fungs menghitung keliling 
double hitung_keliling(double p, double l){
	double keliling = 2 * (p * l);
	return keliling;
}

void tampilkan_keliling(double p, double l){
	cout<<"tampilkan dengan void\n";
	cout<<"Keliling adalah : ";
	cout<<hitung_keliling(p,l)<<endl;
}

void tampilkan_luas(double p, double l){
	cout<<"tampilkan dengan void\n";
	cout<<"Luas adalah : ";
	cout<<hitung_luas(p,l)<<endl;
}

main(){
	double panjang, lebar;
	cout<<"panjang : ";cin>>panjang;
	cout<<"Lebar : ";cin>>lebar;
	
	cout<<"Luasnya adalah : ";
	cout<<hitung_luas(panjang , lebar)<<endl;
	cout<<"keliling adalah : ";
	cout<<hitung_keliling(panjang , lebar)<<endl;
	
	tampilkan_keliling(panjang, lebar);
	tampilkan_luas(panjang, lebar);
}
