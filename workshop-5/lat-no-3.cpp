#include <iostream>
using namespace std;

class Perkalian{
	private :
		int a, b;
		int hasil;
		bool negatif = false;

		void hitung(){
			hasil = 0;
			for (int i = 0; i < cekhargaB(b, a); i++)
				hasil += a;
		}

		int cekhargaB(int bb, int aa){
			if (bb < 0){
				bb *= -1;
				negatif = true;
				if (aa < 0)
					negatif = true;
			}
			return bb;
		}

		int hitung_akhir(int hh){
			if (negatif)
				hh *= -1;
			return hh;
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
	pk.hitung();
	tampil << "Nilai " << pk.a << " X " << pk.b << "   = ";
	tampil << pk.hitung_akhir(pk.hasil);
	tampil << endl;

	return tampil;
}

int main(){
	Perkalian pkk;
	cin >> pkk;
	cout << pkk;
	return 0;
}