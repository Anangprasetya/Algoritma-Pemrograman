#include <iostream>
using namespace std;
class UbahKarakter{
	private :
		string kalimat = "Algoritma Pemrograman";
		void laksanakan(){
			for (int i = 0; i < this->kalimat.length(); i++)
			{
				if (i % 2 == 0)
				{
					if (this->kalimat[i] >= 'a' && this->kalimat[i] <= 'z')
						this->kalimat[i] = this->kalimat[i] - 32;
				}else{
					if (this->kalimat[i] >= 'A' && this->kalimat[i] <= 'Z')
						this->kalimat[i] = this->kalimat[i] + 32;
				}
			}
		}

		void tampil(){
			cout << this->kalimat;
		}

	public :
		UbahKarakter(){
			this->laksanakan();
			this->tampil();
		}

		~UbahKarakter(){
			cout << "\n";
		}
};

int main(){
	UbahKarakter uk;
	uk;
	return 0;
}