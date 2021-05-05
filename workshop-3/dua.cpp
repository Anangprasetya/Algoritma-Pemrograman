#include <iostream>
using namespace std;

// Jika di run maka akan muncul Algortima dari menghitung Volume Tabung

class Dua{
	public :
		void deklarasi(){
			cout << "  Algoritma\n";
			cout << "\tDeklarasi\n";
			cout << "\t    r    : input\n";
			cout << "\t    v    : output\n\n";
		}

		void deskripsi(){
			cout << "\tDeskripsi\n";
			cout << "\t    read(r)  (r > 0)\n";
			cout << "\t    v  <- (4/3) * 3.14 * r * r * r  \n";
			cout << "\t    write(v)\n";
		}
};



int main(){
	cout << endl << endl;

	Dua x;
	x.deklarasi();
	x.deskripsi();


	cout << endl << endl;
	return 0;
}