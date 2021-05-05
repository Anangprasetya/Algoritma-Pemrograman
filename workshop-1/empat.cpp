#include <iostream>
using namespace std;

class Bulat{
	public :
		void tampil(){
			isi();

			cout << "Luas lingkaran  :  " << l_ling << endl;
			cout << "Keliling lingkaran  :  " << kel_ling << endl;
			cout << "Volume bola  :  " << v_bol << endl;
		}


	protected :
		float phi = 3.14;
		int r = 20;
		int d = 40;

	private :
		float l_ling, kel_ling, v_bol;
		void isi(){	
			l_ling = phi * r * r;
			kel_ling = phi * d;
			v_bol = (4.00 / 3.00) * phi * r * r * r; 
		}
};

int main(){
	Bulat coba;

	coba.tampil();
	return 0;
}