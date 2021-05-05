#include <iostream>
using namespace std;

class Tiga{
	public :
		void analisis(){
			cout << "  Analisis\n";
			cout << "\tDiketahui nilai uang\n";
			cout << "\tseratus = uang / 100000 \n";
			cout << "\tuang = uang - (seratus * 100000) \n";
			cout << "\tlimapuluh = uang / 50000 \n";
			cout << "\tuang = uang - (limapuluh * 50000) \n";
			cout << "\tduapuluh = uang / 20000 \n";
			cout << "\tuang = uang - (duapuluh * 20000) \n";
			cout << "\tsepuluh = uang / 10000 \n";
			cout << "\tuang = uang - (sepuluh * 10000) \n";
			cout << "\tlimaribu = uang / 5000 \n";
			cout << "\tuang = uang - (limaribu * 5000) \n\n";
		}
		void deklarasi(){
			cout << "  Algoritma\n";
			cout << "\tDeklarasi\n";
			cout << "\t    uang                          : input\n";
			cout << "\t    seratus, limapuluh, duapuluh  : output\n";
			cout << "\t    sepuluh, limaribu             : output\n\n";
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