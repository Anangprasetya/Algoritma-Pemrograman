#include <iostream>
#include <string>

using namespace std;
int main()
{
   float hasil,phi,a,b,l2,l1;

   cout<<"masukan diameter lingkaran LUAR :"<<endl;
   cin >> a;
   cout<<"masukan diameter lingkaran Dalam  :"<<endl;
   cin >> b;
   if (a <= b){
      cout << "Nilai a harus lebih besar !\n";
      return 0;
   }
   phi=3,14;
   l1 =(a/2)*(a/2)*phi;
   l2 =(b/2)*(b/a)*phi;
   hasil =l1-l2;
   cout << "luas CD tersebut adalah  "<<hasil << endl;
   return 0;
}