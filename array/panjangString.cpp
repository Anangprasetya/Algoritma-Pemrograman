#include <iostream>
#include <string>
using namespace std;
class HitungPanjang{
	private :
		string kalimat;
		int hitung;
		int panjang(string kal){
			int no = 0;
			for (int i = 0; i < kal[i]; i++)
				no++;

			return no;
		}

	public :
		HitungPanjang(){
			this->kalimat = "Anang Nur Prasetya";
			this->hitung = this->panjang(this->kalimat);
			cout << "hitung : " << this->hitung << endl;
		}

};

int main(){
	HitungPanjang hp;
	hp;
	return 0;
}