#include <iostream>
using namespace std;

class Data{
	public :
		void isiData(){
			nama = "Anang";
			usia = 5;
			kodepos = 61333;

		}

		void tampil(){
			cout << "nama  : " << nama << endl;
			cout << "usia  : " << usia << endl;
			cout << "kodepos  : " << kodepos << endl;
		}

	private :
		string nama;
		int usia;
		int kodepos;
};

int main(){

	Data x;
	
	x.isiData();
	x.tampil();

	return 0;
}