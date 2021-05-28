#include <iostream>
#include <fstream>
using namespace std;

class Linear {
	public :
		ifstream bacaNIM, bacaNILAI;

		void cari(string key){
			this->key = key;
			this->proses(key);
		}

		void ambilNilai(){
			if (this->cek)
			{
				bacaNILAI.open("fileNILAI.txt");
				while(getline(bacaNILAI, nilai)){
					if (this->idx == -1){
						cout << "Nilai dari nim " << this->key << " adalah : " << this->nilai << endl;
						break;
					}

					this->idx -= 1;
				}

			}
			else {
				cout << "Kata kunci tidak ditemukan \n";
			}
		}

	private :
		string nim;
		string nilai;
		int idx = 0;
		bool cek = false;
		string key;

		void proses(string key){
			bacaNIM.open("fileNIM.txt");
			while(getline(bacaNIM, nim)){
				if (nim == key){
					this->cek = true;
					break;
				}

				this->idx += 1;
			}

			bacaNIM.close();
		}


};


int main(){
	cout << "\n\n";
	Linear linear;

	linear.cari("2000018010");
	linear.ambilNilai();

	cout << "\n\n";
	return 0;
}



