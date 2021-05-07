#include <iostream>
using namespace std;
class KonversiHuruf{
	private :
		int nilai;
		char nilaiChar;
	protected :
		friend istream & operator >> (istream &, KonversiHuruf &);
		friend ostream & operator << (ostream &, KonversiHuruf &);
		char ubah(int n){
			if (n > 90 && n <= 100)
				nilaiChar = 'A';
			else if (n > 80)
				nilaiChar = 'B';
			else if (n > 70)
				nilaiChar = 'C';
			else if (n > 60)
				nilaiChar = 'D';
			else if (n >= 0)
				nilaiChar = 'E';

			return nilaiChar;
		}
};
ostream & operator << (ostream &tampil, KonversiHuruf &kh){
	tampil << "Nilai huruf adalah  : ";
	tampil << kh.ubah(kh.nilai);
	tampil << endl;
	return tampil;
}
istream & operator >> (istream &terima, KonversiHuruf &kh){
	cout << "Masukkan nilai   : ";
	terima >> kh.nilai;
	return terima;
}
int main(){
	KonversiHuruf konv;
	cin >> konv;
	cout << konv;
	return 0;
}