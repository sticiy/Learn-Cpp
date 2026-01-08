#include<iostream>
using namespace std;

//overloading menimpa
//basic function
int luas_kotak(int panjang, int lebar){
	int luas = panjang * lebar;
	return luas;
}

//overload function
int luas_kotak(int panjang){
	int luas = panjang * panjang;
	return luas;
}
//overload function 2
double luas_kotak(double sisi){
	return sisi*sisi;
}
main(){
	cout<<"luas kotak 2*3 : "<<luas_kotak(2,3)<<endl;
	cout<<"luas kotal 2*2 : "<<luas_kotak(2)<<endl;
	cout<<"luas kotak 2.5*2.5 : "<<luas_kotak(2.5)<<endl;
}
