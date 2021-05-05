#include <iostream>
using namespace std;

class Menu{
	public :
		Menu(){
			head();
			cout << "1. Nasi Goreng\n";
			cout << "2. Ayam Bakar\n";
			cout << "3. Rica Bebek\n";
			cout << "4. ES Jeruk\n";
			cout << "5. ES Milo\n";
			cout << "6. Jus Apel\n";
		}

	private :
		void head(){
			cout << "========== MENU YANG TERSEDIA ==========\n";
		}
};


int main(){
	Menu coba;
	return 0;
}