#include<iostream>
using namespace std;
int main()
{
	int a = 2, b = 2;
	bool hasil1, hasil2;
	
	//komparasi
	
	//sebanding
	hasil2 = (a == b);
	cout<<"sebanding "<< hasil1<<endl;
	
	//tdk sebanding !=
	hasil2 = (a != b);
	cout<<"Tidak sebanding "<<hasil2<<endl;
	
	//kurang dari
	hasil1 = (a < b);
	//lebih dari
	hasil2 = (a > b);
	
	cout<<hasil1<<endl;
	cout<<hasil2<<endl;
	
	
	cin.get();
	return 0;
}
