#include <iostream>
using namespace std;

class HurufI{
	public :
		void cetak(){
			tampilkan();
		}

	private :
		int tinggi = 6;
		int lebar = 3;

	protected :
		void tampilkan(){
			for (int i = 0; i < 6; i++)
			{
				cout << "\t";
				for (int j = 0; j < lebar; j++)
				{
					cout << "*";
				}

				cout << endl;
			}
		}
};

int main(){
	HurufI pertama;


	pertama.cetak();
	return 0;
}