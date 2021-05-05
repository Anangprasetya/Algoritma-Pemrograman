#include <iostream>
using namespace std;

class Tiga{
	public :
		void analisis(){
			cout << "  Analisis\n";
			cout << "\tDiketahui waktu 1, jam : menit\n";
			cout << "\tDiketahui waktu 2, jam : menit\n";
			cout << "\tm1 = jam * 60\n";
			cout << "\tm1 = m1 + mt_1\n";
			cout << "\tm2 = jam2 * 60\n";
			cout << "\tm2 = m2 + mt_2\n";
			cout << "\tm3 = m2 - m1\n";
			cout << "\tjam3 = m3 / 60\n";
			cout << "\tmt_3 = m3 - (jam3 * 60)\n\n";
		}
		void deklarasi(){
			cout << "  Algoritma\n";
			cout << "\tDeklarasi\n";
			cout << "\t    jam, jam2, mt_1, mt_2 : input\n";
			cout << "\t    jam3, mt_3            : output\n\n";
		}

		void deskripsi(){
			cout << "\tDeskripsi\n";
			cout << "\t    read(jam, jam2, mt_1, mt_2) (d > 0) int\n";
			cout << "\t    m1 <- jam * 60              (int)\n";
			cout << "\t    m1 <- m1 + jam * mt_1       (int)\n";
			cout << "\t    m2 <- jam * 60              (int)\n";
			cout << "\t    m2 <- m2 + jam * mt_2       (int)\n";
			cout << "\t    m3 <- m2 - m1               (int)\n";
			cout << "\t    jam3 <- m3 / 60             (int)\n";
			cout << "\t    mt_3 <- m3 - (jam3 * 60)    (int)\n";
			cout << "\t    write(jam3, mt_3)\n\n";
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