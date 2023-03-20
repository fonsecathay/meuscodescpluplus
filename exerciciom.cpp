m) Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a
matriz obtida. 

#include <iostream>

using namespace std;

int main() {
  int matriz[5][5];

  // preenche a matriz com 0
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      matriz[i][j] = 0;
    }
  }

  // preenche a diagonal principal com 1
  for (int i = 0; i < 5; i++) {
    matriz[i][i] = 1;
  }

  // exibe a matriz resultante
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
