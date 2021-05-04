#include <iostream>
using namespace std;
class scien{
 friend ostream& operator<<(ostream&, const scien&);
 friend istream& operator>>(istream&, scien&);
 
 public:
  float angka, a, b;
  void rumus();
};
void scien::rumus(){
 if(angka>999){
  b=3;
  a=angka/1000;
 }
 else if (angka>99){
  b=2;
  a=angka/100;
 }
 else if(angka>9){
  b=1;
  a=angka/10;
 }
 else{
  b=1;
  a=angka;
 }
}
istream& operator>>(istream& i, scien& x){
 cout<<"Masukan Angka = ";
 i>>x.angka;
 return i;
}
ostream& operator<<(ostream& o, scien& x){
 o<<"Scientific Number = "<<x.a<<"E"<<x.b;
 return o;
}
int main(){
 scien y;
 cin>>y;
 y.rumus();
 cout<<y;
}