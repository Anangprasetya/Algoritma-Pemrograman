#include <iostream>
#include <string.h>
using namespace std;

class Lagu{
	public :
		string lirik[4];

		void tam(){
			tampilkan();
		}

	private :
		string ab;
		void tampilkan(){
			for (int i = 0; i < 4; i++){
				cout << "\t" << lirik[i] << endl;
				cout << "tekan tombol [q/Q] quit : "; cin >> ab;
				if (ab == "q" || ab == "Q")
					break;
			}
		}
};


int main(){
	Lagu x;

	x.lirik[0] = "Hanya satu pintaku";
	x.lirik[1] = "Untukmu dan hidupmu";
	x.lirik[2] = "Baik-baik sayang";
	x.lirik[3] = "Ada aku untukmu";

	x.tam();

	return 0;
}