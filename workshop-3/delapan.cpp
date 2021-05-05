#include <iostream>
using namespace std;

class Tiga{
	public :
		void analisis(){
			cout << "  Analisis\n";
			cout << "\tDiketahui diameter luar dan dalam : d_luar , d_dalam\n";
			cout << "\tl1 = (d_luar/2) * (d_luar/2) * 3.14;\n";
			cout << "\tl2 = (d_dalam/2) * (d_dalam/2) * 3.14;\n";
			cout << "\thasil = l1 - l2;\n\n";
		}
		void deklarasi(){
			cout << "  Algoritma\n";
			cout << "\tDeklarasi\n";
			cout << "\t    d_luar, d_dalam : input\n";
			cout << "\t    hasil           : output\n";
		}

		void deskripsi(){
			cout << "\tDeskripsi\n";
			cout << "\t    read(d_luar, d_dalam) (d_luar > d_dalam) float\n";
			cout << "\t    l1 <- (d_luar/2) * (d_luar/2) * 3.14     float\n";
			cout << "\t    l2 <- (d_dalam/2) * (d_dalam/2) * 3.14   float\n";
			cout << "\t    hasil <- l1 - l2                         float\n";
			cout << "\t    write(hasil)\n\n";
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