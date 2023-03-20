//q) Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal,
//abaixo da diagonal principal e os que estão na diagonal principal. Imprima os três resultados.

#include <iostream>
using namespace std;

int main() {
  int matriz[3][3], acima = 0, abaixo = 0, diagonal = 0;

  // Leitura da matriz
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digite um valor para a posicao [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  // Cálculo das somas
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i < j) {
        acima += matriz[i][j];
      } else if (i > j) {
        abaixo += matriz[i][j];
      } else {
        diagonal += matriz[i][j];
      }
    }
  }

  // Impressão dos resultados
  cout << "Soma dos elementos acima da diagonal principal: " << acima << endl;
  cout << "Soma dos elementos abaixo da diagonal principal: " << abaixo << endl;
  cout << "Soma dos elementos na diagonal principal: " << diagonal << endl;

  return 0;
}
