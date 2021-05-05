#include <iostream>
using namespace std;

class Penaggalan{
	public :
		int tanggal, bulan, tahun;
		void tam(){
			tampilkan();
		}

	private :
		void tampilkan(){
			cout << "Menjadi format  : " << tanggal << "-" << bulan << "-" << tahun << endl;
			cout << endl;
		}
};

int main(){
	Penaggalan coba;
	cout << "Tanggal : "; cin >> coba.tanggal; 
	cout << "Bulan : "; cin >> coba.bulan; 
	cout << "Tahun : "; cin >> coba.tahun;

	coba.tam(); 


	return 0;
}
