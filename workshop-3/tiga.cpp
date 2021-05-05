#include <iostream>
using namespace std;

class Tiga{
	public :
		void analisis(){
			cout << "  Analisis\n";
			cout << "\tSegitiga ABC, siku siku di B\n";
			cout << "\tMaka AB dan BC di Ketahui\n";
			cout << "\t             /---------\n";
			cout << "\tMaka AC =  \\/  AB^2  + BC^2 \n\n";
		}
		void deklarasi(){
			cout << "  Algoritma\n";
			cout << "\tDeklarasi\n";
			cout << "\t    ab, bc  : input\n";
			cout << "\t    ac      : output\n\n";
		}

		void deskripsi(){
			cout << "\tDeskripsi\n";
			cout << "\t    read(ab, ac)  (ab > 0, ac > 0)\n";
			cout << "\t    ac  <- sqrt((ab * ab)  + (bc * bc)) \n";
			cout << "\t    write(ac)\n";
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