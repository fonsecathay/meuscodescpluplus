//r) Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.

#include <iostream>
using namespace std;

int main() {
  int A[3][3], B[3][3], C[3][3];

  // Leitura da matriz A
  cout << "Digite os elementos da matriz A:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> A[i][j];
    }
  }

  // Leitura da matriz B
  cout << "Digite os elementos da matriz B:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> B[i][j];
    }
  }

  // Cálculo da matriz C
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      C[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Impressão da matriz C
  cout << "O resultado da multiplicação das matrizes A e B é:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
