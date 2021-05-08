#include <iostream>
#include <algorithm>
using namespace std;

class Kalimat{
	public :
		inline void access(){
			this->cetak();
			this->fxVokal();
			this->fxKonsonan();
			this->kata();
			this->kataTerbanyak();
			this->kapitalPertama();
		}
		inline void terima(){
			cout << "Masukkan kalimat : ";
			getline(cin, this->kal);	
			cout << endl;	
		}
	private :
		string kal;
		char konsonan[20];
		int nomor = 0, jumlahKata = 1;
		char cek[52] = {'a','b','c','d','e','f','g','h','i',
			    'j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D'
			    ,'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		int jmlh[52]={0};

		inline void cetak(){
			cout << "Hasil : " << this->kal << endl;
		}

		inline void pilih(char x){
			switch(x){
				case 'a':
					cout << x << " ";
					break;
				case 'i':
					cout << x << " ";
					break;
				case 'u':
					cout << x << " ";
					break;
				case 'e':
					cout << x << " ";
					break;
				case 'o':
					cout << x << " ";
					break;
				case 'A':
					cout << x << " ";
					break;
				case 'I':
					cout << x << " ";
					break;
				case 'U':
					cout << x << " ";
					break;
				case 'E':
					cout << x << " ";
					break;
				case 'O':
					cout << x << " ";
					break;
				default:
					this->konsonan[this->nomor] = x;
					this->nomor++;

			}
		}

		inline void fxVokal(){
			cout << "Vokal :";
			for (int i = 0; i < this->kal.length(); i++){
				this->pilih(kal[i]);
				if (kal[i] == ' ')
					this->jumlahKata++;
			}

			cout << endl;
		}

		inline void fxKonsonan(){
			cout << "Konsonan : ";
			for (int i = 0; i < this->nomor; i++)
				cout << this->konsonan[i] << " ";

			cout << endl;
		}

		inline void kata(){
			cout << "Kata : " << this->jumlahKata << endl;
		}

		inline void kataTerbanyak(){
			for (int i = 0; i < this->kal.length(); i++)
				for (int j = 0; j < 52; ++j)
					if (this->kal[i] == this->cek[j])
						this->jmlh[j]++;


			int max = this->jmlh[0];
			char huruf = this->cek[0];
			for (int i = 0; i < 52; i++){
				if (this->jmlh[i] > max){
					huruf = this->cek[i];
					max = this->jmlh[i];
				}
			}

			cout << "Karakter terbanyak : " << huruf << ", dengan total " << max << endl;
		}

		inline void kapitalPertama(){
			for(int i = 0; i < this->kal.length(); i++)
			{
				if(this->kal[i]==' ')
				{
					if(this->kal[i + 1] >= 'a' && this->kal[i + 1] <= 'z')
						this->kal[i + 1] = (char)(this->kal[i + 1] - 32);
				}
				else if (this->kal[0] >= 'a' && this->kal[0] <= 'z')
					this->kal[0] = (char)(this->kal[0] - 32);
			}

			cout << "Ubah awal kata : " << this->kal << endl;

		}

};

int main(){
	Kalimat kl;
	kl.terima();
	kl.access();
	return 0;
}