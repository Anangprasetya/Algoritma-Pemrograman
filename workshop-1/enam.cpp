#include <iostream>
using namespace std;

class Cerita{
	protected :
		int uang = 20000;
		int satu_kg = 5500;
		int tiga_kg = satu_kg * 3;
};

class Hasil: public Cerita{
	public :
		Hasil(){
			cout << "Kembalian adek : " << uang - tiga_kg << endl;
		}
};


int main(){

	Hasil obj;
	return 0;
}