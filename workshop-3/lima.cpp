#include <iostream>
using namespace std;

class Tiga{
	public :
		void analisis(){
			cout << "  Analisis\n";
			cout << "\tDiketahui jam : menit : detik, misal j : m : dt\n";
			cout << "\td = jam * 3600\n";
			cout << "\td = d + (menit * 60)\n";
			cout << "\td = d + dt\n\n";
		}
		void deklarasi(){
			cout << "  Algoritma\n";
			cout << "\tDeklarasi\n";
			cout << "\t    j, m, dt : input\n";
			cout << "\t    d        : output\n\n";
		}

		void deskripsi(){
			cout << "\tDeskripsi\n";
			cout << "\t    read(j, m, dt)    (d > 0) int\n";
			cout << "\t    d <- j * 3600     (int)\n";
			cout << "\t    d <- d + (m * 60) (int)\n";
			cout << "\t    d <- d + dt       (int)\n";
			cout << "\t    write(d)\n\n";
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