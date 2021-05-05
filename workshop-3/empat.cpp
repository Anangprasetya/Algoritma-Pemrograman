#include <iostream>
using namespace std;

class Tiga{
	public :
		void analisis(){
			cout << "  Analisis\n";
			cout << "\tDiketahui detik, misal d\n";
			cout << "\tjam = d / 3600        (int)\n";
			cout << "\td = d - (jam * 3600)\n";
			cout << "\tmenit = d / 60        (int) \n";
			cout << "\td = d - (menit * 60)\n\n";
		}
		void deklarasi(){
			cout << "  Algoritma\n";
			cout << "\tDeklarasi\n";
			cout << "\t    d          : input\n";
			cout << "\t    jam, menit : output\n\n";
		}

		void deskripsi(){
			cout << "\tDeskripsi\n";
			cout << "\t    read(d)               (d > 0)\n";
			cout << "\t    jam <- d / 3600       (int)\n";
			cout << "\t    d <- d - (jam * 3600) (int)\n";
			cout << "\t    menit <- d / 60       (int)\n";
			cout << "\t    d <- d - (menit * 60) (int)\n";
			cout << "\t    write(jam, menit, d)\n\n";
		}
};



int main(){
	cout << endl << endl;

	Tiga x;
	x.analisis();
	x.deklarasi();
	x.deskripsi();


	cout << endl << endl;
	return 0;
}