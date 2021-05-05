#include <iostream>
#include <string.h>
using namespace std;

class Cerita{
	public :
		struct tipece
		{
			string ad;
		};


		tipece ceri[10];

		void tampil(){
			ta();
		}

	private :
		void ta(){
			for (int i = 0; i < 10; i++)
				cout << "\t" << ceri[i].ad << endl;
		}


};

int main(){

	Cerita x;

	x.ceri[0].ad = "Dari bangun tidur saya pergi ke kamar mandi";
	x.ceri[1].ad = "Lalu membuka kran untuk wudhu dan pergi ke ruang sholat";
	x.ceri[2].ad = "Menyiapkan sajadah dan mengambil peci lalu mengerjakan sholat";
	x.ceri[3].ad = "Kemudian pergi ke dapur ambil piring lalu membuka penutup penanak nasi";
	x.ceri[4].ad = "Mengambil nasi dan mengambil lauk nya, lalu duduk di kursi terdekat dan makan";
	x.ceri[5].ad = "Setelah makan, mengambil gelas dan menuangkan air ke gelas lalu duduk dan minum";
	x.ceri[6].ad = "Setelah minum pergi ke kamar mandi, lalu mandi";
	x.ceri[7].ad = "Lalu pergi ke kamar mengambil pakaian dan memakainya";
	x.ceri[8].ad = "Lalu berangkat ke kampus naik sepeda";
	x.ceri[9].ad = "Setelah sampai berjalan ke arah ruang kelas";


	x.tampil();

	return 0;
}