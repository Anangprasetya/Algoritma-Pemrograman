#include <iostream>
using namespace std;

class Perkalian{
	private :
		int a, b;
		int hasil = 0;
		bool negatif = false;

		int rekursiff(int aa){
			hasil += aa;
			b -= 1;
			if (b == 0)
				return hasil_akhir();
			else
				return rekursiff(aa);
		}

		void hargaB(){
			if (b < 0){
				b *= -1;
				negatif = true;
				if (a < 0)
					negatif = true;
			}
		}

		int hasil_akhir(){
			if(negatif)
				hasil *= -1;
			return hasil;
		}

	protected :
		friend ostream & operator << (ostream &, Perkalian &);
		friend istream & operator >> (istream &, Perkalian &);
};

istream & operator >> (istream &terima, Perkalian &pk){
	cout << "Masukkan a  : "; terima >> pk.a;
	cout << "Masukkan b  : "; terima >> pk.b;
	return terima;
}


ostream & operator << (ostream &tampil, Perkalian &pk){
	tampil << "Hasil  : ";
	pk.hargaB();
	tampil << pk.rekursiff(pk.a);
	tampil << endl;
	return tampil;
}

int main(){
	Perkalian pkk;
	cin >> pkk;
	cout << pkk;
	return 0;
}