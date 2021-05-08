#include <stdio.h>
#include <math.h>

int cekSelisih(int s){
	if (s < 0)
		s *= -1;

	return s;
}

int main(void){
	float selisih, jumlah;
	int i;

	jumlah = 0.0;
	i = 1;		
	do{
		jumlah += 1.0 / i;
		i++;
		selisih = (1.0 / (i - 1)) - (1.0 / i);
	}while(cekSelisih(selisih) >= 0.001);

	printf("Hasil adalah : %f, %d \n", jumlah, i);
	return 0;
}