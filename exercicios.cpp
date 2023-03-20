//s) Elabore um programa que tendo duas matrizes 3X3, imprima a soma dessas matrizes.

#include <iostream>

using namespace std;

int main() {
  int matriz1[3][3], matriz2[3][3], matrizSoma[3][3];

  // preenche as matrizes 1 e 2 com valores fornecidos pelo usuário
  cout << "Digite os valores da matriz 1: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz1[i][j];
    }
  }

  cout << "Digite os valores da matriz 2: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz2[i][j];
    }
  }

  // realiza a soma das matrizes e armazena na matrizSoma
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  // imprime a matriz soma
  cout << "A matriz soma eh: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrizSoma[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
