#include <iostream>
using namespace std;
class Terbesar{
	private :
		int x, y, z;
		int max;
		int banding(){
			max = x;
			if (y > max)
				max = y;
			if (z > max)
				max = z;
			return max;
		}
	protected :
		friend ostream & operator << (ostream &, Terbesar &);
		friend istream & operator >> (istream &, Terbesar &);
};
ostream & operator << (ostream &tampil, Terbesar &tb){
	tampil << endl;
	tampil << "Nilai terbesar adalah : ";
	tampil << tb.banding();
	tampil << endl;
	return tampil;
}
istream & operator >> (istream &terima, Terbesar &tb){
	cout << "Masukkan nilai x  : "; terima >> tb.x;
	cout << "Masukkan nilai y  : "; terima >> tb.y;
	cout << "Masukkan nilai z  : "; terima >> tb.z;
	return terima;
}
int main(){
	Terbesar t;
	cin >> t;
	cout << t;
	return 0;
}