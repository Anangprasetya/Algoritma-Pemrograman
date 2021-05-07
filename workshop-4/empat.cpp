#include <iostream>
using namespace std;

class CekTipee{
	public :
		void tampil(){
			it = flt;
			if (flt - it == 0)
				cout << "Ini integer\n";
			else
				cout << "Ini float \n";
		}

	protected :
		friend istream & operator >> (istream &, CekTipee &);

	private :
		float flt;
		int it;
};

istream & operator >> (istream &in, CekTipee &ct){
	cout << "Masukkkan fltka :  ";
	in >> ct.flt;

	return in;
}

int main(){
	CekTipee cc;

	cin >> cc;
	cc.tampil();
	return 0;
}