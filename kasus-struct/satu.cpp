#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "satu.h"
using namespace std;


class RunProgam : private System {
	public :
		void run(){
			this->pilihan();

			if (pilih == 1)
				this->input_data();
			else if (pilih == 2)
				this->ambil_data();
			else if (pilih == 3)
				exit(0);
		}
};


int main(){

	RunProgam app;
	app.run();

	return 0;
}
