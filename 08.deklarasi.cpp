#include <iostream>
using namespace std;
int main() {
	int a; //ini adalah sebuah deklasrasi, bila di compile ini akan eror karena kita tdk tahu nilai A itu apa
	a = 1; // bila seperti ini (ditambah ini maka baru bisa)
	cout<< a <<endl;
	
	int b;
	cout<<"Masukkan nilai : "; //cin>> b;
	cin>> b ;
	cout<<"Nilai yang anda masukan adalah : "; //cout << b << endl;
	cout << b << endl;
	
}
