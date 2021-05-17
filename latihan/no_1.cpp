#include <iostream>
using namespace std;

class Data{
	protected :
		friend ostream& operator << (ostream& tampil, Data& dd);
};

ostream& operator << (ostream& tampil, Data& dd){
	tampil << "Nama : UAD \n";
	tampil << "Usia : 2 \n";

	return tampil;
}



int main(){
	Data x;

	cout << x;

	return 0;
}
