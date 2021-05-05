#include <iostream>
using namespace std;

class Rencana{
	public :
		struct re
		{
			string a;
		};

		re renc[2];


		void tampil(){
			tam();
		}

	private :
		void tam(){
			for (int i = 0; i < 2; i++)
				cout << renc[i].a << endl;
		}
};

int main(){
	Rencana x;

	x.renc[0].a = "1). Pergi ke strabuck untuk membeli kado minuman";
	x.renc[1].a = "2). Pergi ke kfc untuk membeli kado makanan";

	x.tampil();

	return 0;
}