/*
#include <iostream>
// #include <conio.h>
using namespace std;

class Kalimat{
	public : 
		Kalimat(string kata_awal = ""): kata(kata_awal){
			cout << "Selamat datang \n";
		}

		void cetak(){
			cout << kata;
		}


	private :
		string kata;
};

int main(){
	Kalimat kata1("Belajar Algoritma");
	Kalimat kata2("Dan Pemrograman");

	kata1.cetak();
	kata2.cetak();
	cout << endl;
	kata1.cetak();
	// getch();
	return 0;
}

*/

#include <iostream>
using namespace std;

class Kalimat{
	public :
		Kalimat(string kal){
			kata = kal;
		}

		inline void cetak(){
			cout << "Hasil : " << kata << endl;
			this->angka = 40;
			cout << "angka : " << angka;
		}

	protected :
		string kata;
		int angka;
};

int main(){

	Kalimat ka1("Selamat datang");
	ka1.cetak();

	return 0;
}