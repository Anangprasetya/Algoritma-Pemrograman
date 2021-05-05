#include <iostream>
using namespace std;

class DataDiri{
	public :
		void tampilkan(){
			isi();
			cout << "Nama\t: " << nama << endl;
			cout << "nim\t: " << nim << endl;
			cout << "alamat\t: " << alamat << endl;
			cout << "nohp\t: " << nohp << endl;
			cout << "email\t: " << email << endl;
			cout << "kodepos\t: " << kodepos << endl;
			cout << "golDrh\t: " << golDarah << endl;
		}

	private :
		void isi(){
			nama = "Anang Nur Prasetya";
			nim = "2000018047";
			alamat = "Ds. Sumbergirang, Kec. Puri, Kab. Mojokerto Prov. Jawa Timur";
			nohp = "082139650264";
			email = "anangnr.pras@gmail.com";
			kodepos = 61363;
			golDarah = 'O';
		}

	protected :
		string nama, nim, alamat, nohp, email;
		int kodepos;
		char golDarah;
};


int main(){
	DataDiri my;

	my.tampilkan();
	return 0;
}