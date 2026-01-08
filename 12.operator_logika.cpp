#include<iostream>
using namespace std;

main()
{
	int a =3, b=2;
	bool hasil;
	//operator logika not, and, or
	
	//not
	hasil = !(a==3);   //ketika hasil tidak sama dengan value maka not akan mengeluarkan output true/1, jika hasil dan value sama maka akan false/0
	cout<<hasil<<endl;
	
	//end atau &&
	hasil = (a==3) and (b == 2); //jika kedua hasil benilai sama makana akn menamiplak output true/1
	cout<<hasil<<endl;
	
	//or atau ||
	hasil = (a == 3) || (b == 1);	////ketika salah satu dari hasil bernilai benar maka akan menampilkan output true/1, jika keduanya akan true/1, dan jika keduanya salah akan false/0
	cout<<hasil<<endl;
	
	cin.get();
	return 0;
}
