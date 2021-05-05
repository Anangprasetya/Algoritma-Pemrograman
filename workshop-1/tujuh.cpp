#include <iostream>
using namespace std;

class Cerita{
	protected :
		int uang = 20000;
		int satu_kg = 5500;
		int max_beli = uang / satu_kg;
};

class Hasil: public Cerita{
	public :
		Hasil(){
			cout << "Maksimal membelu : " << max_beli << " kg \n";
		}
};


int main(){

	Hasil obj;
	return 0;
}