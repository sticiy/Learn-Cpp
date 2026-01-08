#include <iostream>

using namespace std;

int main() {
	int a = 6;
	int b = 4;
	
	//operatornya + - * / %
	float hasil;
	//penjumlahan
	hasil = a + b;
	cout << "hasilnya : " << hasil << endl;
	
	//pengurangan
	hasil = a - b;								
	cout << "hasilnya :" << hasil << endl;
	
	//perkalian
	hasil = a * b;								
	cout << "hasilnya :" << hasil << endl;
	
	//pembagian
	hasil = a / b;								
	cout << "hasilnya :" << hasil << endl;
	
	//modulus
	hasil = a % b;								
	cout << "hasilnya :" << hasil << endl;
	
	cin.get();
	return 0;
}
