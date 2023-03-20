//um número de ponto flutuante também pode ser um número científico com um "e" para indicar a potência de 10:
#include <iostream>
using namespace std;
 
int main () {
  float f1 = 35e3;
  double d1 = 12E4;
  cout << f1 << "\n";
  cout << d1;
  return 0;
}
