#include <typeinfo>
#include <iostream>
using namespace std;

int main(){
	int a;

	cout << "Masukkan nilai : "; 
	cin >> a;
	cout << "Nilai : " << a << ", Type : ";

	cout << typeid(a).name() << endl;
}