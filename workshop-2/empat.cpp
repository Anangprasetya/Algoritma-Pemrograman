#include <iostream>
using namespace std;

class Hitung{
	protected :
		friend ostream & operator << (ostream &, Hitung &);
		friend istream & operator >> (istream &, Hitung &);


	private :
		int a, b;

		void tambah(){
			cout << "\t" << a << " + " << b << " = " << a + b;
			cout << endl;
		}

		void kurang(){
			cout << "\t" << a << " - " << b << " = " << a - b;
			cout << endl;
		}

		void kali(){
			cout << "\t" << a << " * " << b << " = " << a * b;
			cout << endl;
		}

		void bagi(){
			cout << "\t" << a << " / " << b << " = " << a / b;
			cout << endl;
		}


};


istream & operator >> (istream &in, Hitung &hh){
	cout << "Masukkan a  : ";
	in >> hh.a;
	cout << "Masukkan b  : ";
	in >> hh.b;

	return in;
}


ostream & operator << (ostream &ot, Hitung &hh){
	ot << " ==== Hasil program ==== \n";
	hh.tambah();
	hh.kurang();
	hh.kali();
	hh.bagi();

	return ot;
}

int main(){
	Hitung hit;

	cin >> hit;

	cout << hit;
	return 0;
}