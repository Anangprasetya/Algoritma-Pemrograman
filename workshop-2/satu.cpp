#include <iostream>
using namespace std;

class Waktu{
	friend ostream &operator << (ostream &keluar, Waktu &w);
	friend istream &operator >> (istream &, Waktu &);

	private :
		int jam, menit;
		int detik;
};

ostream &operator << (ostream &keluar, Waktu &w){
	keluar << "Hasil format : ";
	keluar << w.jam << ":" << w.menit << ":" << w.detik;
	keluar << endl;

	return keluar;
}

istream &operator >> (istream &masuk, Waktu &wa){
	cout << "Masukkan jam :  "; masuk >> wa.jam;
	cout << "Masukkan menit :  "; masuk >> wa.menit;
	cout << "Masukkan detik :  "; masuk >> wa.detik;

	return masuk;
}
int main(){
	Waktu x;
	cin >> x;
	cout << x;
	return 0;
}