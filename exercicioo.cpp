//o) Leia uma matriz 3 x 3. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e,ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.

#include <iostream>
using namespace std;

int main() {
  int matriz[3][3];
  int x, linha = -1, coluna = -1;

  // Leitura da matriz
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digite o valor da posição [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  // Leitura do valor a ser procurado
  cout << "\nDigite o valor a ser procurado: ";
  cin >> x;

  // Busca do valor na matriz
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (matriz[i][j] == x) {
        linha = i;
        coluna = j;
        break;
      }
    }
  }

  // Exibição da localização ou mensagem de não encontrado
  if (linha != -1 && coluna != -1) {
    cout << "\nO valor " << x << " foi encontrado na posição [" << linha << "][" << coluna << "]" << endl;
  } else {
    cout << "\nO valor " << x << " não foi encontrado na matriz" << endl;
  }

  return 0;
}
