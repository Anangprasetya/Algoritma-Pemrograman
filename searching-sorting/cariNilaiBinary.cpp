#include <iostream>
using namespace std;

class Binary {
	public :
		Binary(){
			cout << "Masukkan banyak : ";
			cin >> this->banyak;
			int nim[banyak];
			int nilai[banyak];

			cout << "Cari berdasarkan nim : ";
			cin >> key;

			this->isidata(nim, nilai);
		}

	private :
		int banyak;
		int key;
		bool cek = false;

		void isidata(int nim[], int nilai[]){
			for (int i = 0; i < banyak; i++)
			{
				cout << "Masukkan nim - " << i + 1 << " : ";
				cin >> nim[i];
			}

			cout << endl;

			for (int i = 0; i < banyak; i++)
			{
				cout << "Masukkan nilai - " << i + 1 << " : ";
				cin >> nilai[i];
			}

			this->cari(nim, nilai);
		}


		void cari(int nim[], int nilai[]){
			int bawah = 0;
			int atas = banyak - 1;
			int tengah;

			while(bawah <= atas){
				tengah = (bawah + atas) / 2;
				if (nim[tengah] == key)
				{
					cek = true;
					cout << "Nilai nim " << key << " : " << nilai[tengah] << endl;
					break;
				}
				else {
					if (key < nim[tengah])
						atas = tengah - 1;
					else
						bawah = tengah + 1;
				}
			}

			if (!cek)
				cout << "Data tidak ditemukan \n";

		}

};

int main(){
	Binary binary;
	return 0;
}





