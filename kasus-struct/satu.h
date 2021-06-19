using namespace std;

class KTP {
	protected :
		struct Identitas
		{
			string nama;
			string nik;
			string ttl;
			char jk;
			string alamat;
			string agama;
		};


		Identitas orang[30];
		string nama[30];
		string sort[30];
		ifstream baca;
		ofstream tulis;
		int idx, n;
		int banyak;

		int pilih;
};

class MyMethod : protected KTP {
	protected :
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
};



class System : public MyMethod {
	protected :
		void pilihan(){
			cout << " Pilihan \n";
			cout << " 1) Input data \n";
			cout << " 2) Ambil data \n";
			cout << " 3) Keluar \n";
			cin >> pilih;

			system("clear");
		}

		void input_data(){
			cout << " Masukkan banyak data  : ";
			cin >> banyak;

			cin.ignore();
			for (int i = 0; i < banyak; i++)
			{
				cout << " Nama\t: ";
				getline(cin, orang[i].nama);

				cout << " NIK\t: "; 
				getline(cin, orang[i].nik);

				cout << " TTL\t: "; 
				getline(cin, orang[i].ttl);

				cout << " jk\t: "; cin >> orang[i].jk;

				cout << " alamat\t: "; 
				cin.ignore();
				getline(cin, orang[i].alamat);

				cout << " agama\t: "; 
				getline(cin, orang[i].agama);
				cout << "\n\n";
			}

			system("clear");
			cout << "\n ========= HASIL OUTPUT =========\n";
			for (int i = 0; i < banyak; ++i)
			{
				cout << "  Data ke < "<< i + 1 <<" >\n";
				cout << " nama\t: " << orang[i].nama << endl;
				cout << " nik\t: " << orang[i].nik << endl;
				cout << " ttl\t: " << orang[i].ttl << endl;
				cout << " jk\t: " << orang[i].jk << endl;
				cout << " alamat\t: " << orang[i].alamat << endl;
				cout << " agama\t: " << orang[i].agama << endl;
				cout << "\n";

				tulis.open("Data/nama_pertama.txt", ios::app);
				tulis << orang[i].nama << endl;
				tulis.close();
			}
		}

		void ambil_data(){
			idx = 0;
			baca.open("Data/nama_pertama.txt");
			while(!baca.eof()){
				getline(baca, nama[idx]);
				idx++;
			}
			baca.close();

			idx = 0;
			baca.open("Data/nama_pertama.txt");
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

			// cout << "p : " << p << endl;

			tulis.open("Data/nama_urut.txt");
			for (int i = 0; i < n; i++)
				tulis << nama[i] << endl;

			tulis.close();
			
			cout << "\n\n Setelah Sorting \n";
			tampil(nama, n);
		}
};