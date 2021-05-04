#include <iostream>
using namespace std;

class Bentuk{
	friend ostream & operator << (ostream &, Bentuk &);
	friend istream & operator >> (istream &, Bentuk &);

	protected :
		int bilang,sebut;
};

ostream & operator << (ostream &tampilan, Bentuk &ben){
	tampilan << "    " << ben.bilang << endl;
	tampilan << "  -----\n";
	tampilan << "    " << ben.sebut << endl;

	return tampilan;
}


istream & operator >> (istream &masukan, Bentuk &b){
	cout << "Pembilang : "; masukan >> b.bilang;
	cout << "Penyebut : "; masukan >> b.sebut;


	return masukan;
}


int main(){
	Bentuk apa;

	cin >> apa;

	cout << apa;
	return 0;
}