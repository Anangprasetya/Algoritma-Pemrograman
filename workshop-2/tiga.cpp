#include <iostream>
using namespace std;

class Bagian{
	protected :
		friend ostream & operator << (ostream &sigout, Bagian &bb);
		friend istream & operator >> (istream &, Bagian &);

	private :
		int ribuan, puluhan;
		int satuan, ratusan;
};


ostream & operator << (ostream &sigout, Bagian &bb){
	sigout << "Hasil adalah :  ";
	sigout << bb.ribuan + bb.ratusan + bb.puluhan + bb.satuan;
	sigout << "\n";


	return sigout;
}


istream & operator >> (istream &masuk, Bagian &b){
	cout << "Masukkan ribuan   : "; masuk >> b.ribuan;
	cout << "Masukkan ratusan  : "; masuk >> b.ratusan;
	cout << "Masukkan puluhan  : "; masuk >> b.puluhan;
	cout << "Masukkan satuan   : "; masuk >> b.satuan;


	return masuk;
}




int main(){
	Bagian x;
	cin >> x;

	cout << x;
	return 0;
}