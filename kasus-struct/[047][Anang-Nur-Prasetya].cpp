#include <iostream>
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct Data
{
	string nik, nama;

	struct TTL {
		string tempat;
		string bulan;
		int tanggal, tahun;
	};

	TTL ttl;
	struct Alamat
	{
		int rt, rw;
		string desa, kecamatan, dusun;
	};

	bool jk;
	Alamat alamat;


	string agama;
	bool status_kawin;

	string pekerjaan;
	string kewarganegaraan = "WNI";
	string berlaku = "SEUMUR HIDUP";

	string gol_darah;

};


string strlow(string x){
			for (int i = 0; i < x.length(); i++)
			{
				if (x[i] >= 'A' && x[i] <= 'Z'){
					x[i] += 32;
				}
			}

			return x;
		}

		void tampil(string x[], int y){
			cout << " Array \n\n";
			for (int i = 0; i < y; ++i)
			{
				cout << " Nama : " << x[i] << endl;
				
			}
		}


		inline void tukar(string * x, string * y){
			string hasil = *x;
			*x = *y;
			*y = hasil;
		}

		int cari_panjang(string x[], int y){
			int b = 0;
			for (int i = 0; i < y; i++)
				if (b < x[i].length())
					b = x[i].length();

			return b;

		}


int main(){
	int pilih;

	Data ktp[10];
	string nama[20];
	string sort[20];
	ifstream baca;
	ofstream tulis;
	int n;
	int idx;

	cout << "  ============ PILIH ============ \n";
	cout << "  1) Input Data \n";
	cout << "  2) Ambil Data \n";
	cout << "  3) Keluar \n";
	cout << "  Pilih  :  "; cin >> pilih;


	system("clear");
	if (pilih == 1){	
		cout << " Masukkan banyak data : ";
		cin >> n;
		cin.ignore();
		string x;
		int agm;
		for (int i = 0; i < n; i++)
		{
			cout << " NIK  : ";
			getline(cin, ktp[i].nik);

			cout << " NAMA : ";
			getline(cin, x);
			ktp[i].nama = x;

			cout << " Tempat : ";
			getline(cin, ktp[i].ttl.tempat);

			cout << " Tanggal : ";
			cin >> ktp[i].ttl.tanggal;

			cout << " Bulan  : ";
			cin.ignore();
			getline(cin, ktp[i].ttl.bulan);

			cout << " Tahun : ";
			cin >> ktp[i].ttl.tahun;

			cout << " Jenis Kelamin : ";
			cin >> ktp[i].jk;


			cout << " Dusun  : ";
			cin.ignore();
			getline(cin, ktp[i].alamat.dusun);

			cout << " RT  : ";
			cin >> ktp[i].alamat.rt;
			cout << " RT  : ";
			cin >> ktp[i].alamat.rw;

			cout << " Desa  : ";
			cin.ignore();
			getline(cin, ktp[i].alamat.desa);

			cout << " Kecamatan : ";
			getline(cin, ktp[i].alamat.kecamatan);

			cout << " Agama : ";
			getline(cin, ktp[i].agama);

			cout << " Status Kawin : ";
			cin >> ktp[i].status_kawin;

			cout << " Pekerjaan : ";
			cin.ignore();
			getline(cin, ktp[i].pekerjaan);


			cout << " Gol Darah : ";
			getline(cin, ktp[i].gol_darah);

		}


		tulis.open("nama.txt");
		for (int i = 0; i < n; i++)
		{
			tulis << ktp[i].nama << endl;	
		}
		tulis.close();



	}

	else if (pilih == 2){


		idx = 0;
		baca.open("nama.txt");
		while(!baca.eof()){
			getline(baca, nama[idx]);
			idx++;
		}
		baca.close();

		idx = 0;
		baca.open("nama.txt");
		string x;
		while(!baca.eof()){
			getline(baca, x);
			sort[idx] = strlow(x);
			idx++;
		}
		baca.close();
		n = idx - 1;

		cout << " Sebelum Sorting  \n";
		tampil(nama, n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < sort[i].length(); j++)
			{
				if (sort[i][j] == ' ')
					sort[i].erase(j, 1);
			}	
		}

		int l = 0;
		int r;
		int p = 1;
		int terpanjang = cari_panjang(nama, n);


		for (int i = 1; i < n; i++)
			for (int j = i; j > 0; j--)
				if ((int) sort[j][0] < (int) sort[j - 1][0]){
					tukar(& sort[j], & sort[j - 1]);
					tukar(& nama[j], & nama[j - 1]);
				}





		for (int s = 0; s < n; s++)
		{

			for (int i = l; i < n - 1; i++)
			{
				if (sort[i][p - 1] != sort[i + 1][p - 1]){
					r = i + 1;
					break;
				}
			}


			if (r - l != 1){
				for (int i = l + 1; i < r; i++)
				{
					for (int j = i; j > l; j--)
					{
						if (sort[j][p] < sort[j - 1][p]){
							tukar(& sort[j], & sort[j - 1]);
							tukar(& nama[j], & nama[j - 1]);
						}
					}
				}
			}

			l = r;
			if (r == n - 1){
				p++;
				l = 0;
			}

		}


		tulis.open("nama_urut.txt");
		for (int i = 0; i < n; i++)
			tulis << nama[i] << endl;

		tulis.close();
		
		cout << "\n\n Setelah Sorting \n";
		tampil(nama, n);




	}

	else {
		exit(0);
	}


	return 0;
}


