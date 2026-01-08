#include<iostream>
using namespace std;

double volume_kubus(double p, double l, double t=1);
//ini nilai defult = 1
double luas(int p=1, int l=1){
	return p*l;
}
main(){
	cout<<"volume kubus : "<<volume_kubus(3,4,5)<<endl;
	cout<<"luas : "<<luas()<<endl;
}


//default argumen atau nilai standardnya
double volume_kubus(double p, double l, double t){
	return p*l*t;
}

