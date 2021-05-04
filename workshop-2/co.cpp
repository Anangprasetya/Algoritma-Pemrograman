#include <iostream>
using namespace std;

class Orang{
	friend ostream &operator << (ostream &tampilkan, Orang &o);
	friend istream &operator >> (istream &, Orang &);

	public :
		int umur;
		char golDarah;
		string nama;
};


ostream &operator << (ostream &tampilkan, Orang &o){
	tampilkan << "Data Seseorang dibawah ini \n";
	tampilkan << "Nama : " << o.nama << endl;
	tampilkan << "Umur : " << o.umur << endl;
	tampilkan << "GOl : " << o.golDarah << endl;


	return tampilkan;
}


istream &operator >> (istream &masukkan, Orang &o){
	cout << "Masukkan nama :  "; 
	masukkan >> o.nama;
	cout << "Masukkan umur :  "; 
	masukkan >> o.umur;
	cout << "Masukkan golDarah :  "; 
	masukkan >> o.golDarah;


	return masukkan;
}

int main(){
	Orang x;

	cout << x.nama;

	cin >> x;

	cout << x;
	return 0;
}

/*
===========================================================================
========================== ANANG NUR PRASETYA 	 ==========================
========================== 2000018047 			 ==========================
========================== A 					 ==========================
========================== Algoritma Pemrograman ==========================
===========================================================================

*/