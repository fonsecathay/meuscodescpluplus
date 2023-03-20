//n) Leia uma matriz 4 x 4, imprima a matriz e retorne à localização (linha e a coluna) do maior valor. 

#include <iostream>
using namespace std;

int main() {
  int matriz[4][4];
  int maiorValor = matriz[0][0];
  int linha, coluna;

  //ler matriz
  for(int i=0; i<4; i++) {
      for(int j=0; j<4; j++) {
          cout << "Digite o valor para a posicao [" << i << "][" << j << "] : ";
          cin >> matriz[i][j];
      }
  }

  //imprimir matriz
  cout << "Matriz:\n";
  for(int i=0; i<4; i++) {
      for(int j=0; j<4; j++) {
          cout << matriz[i][j] << "  ";
      }
      cout << endl;
  }

  //buscar maior valor e sua posição
  for(int i=0; i<4; i++) {
      for(int j=0; j<4; j++) {
          if(matriz[i][j] > maiorValor) {
              maiorValor = matriz[i][j];
              linha = i;
              coluna = j;
          }
      }
  }

  cout << "\nMaior valor: " << maiorValor << endl;
  cout << "Localizacao: [" << linha << "][" << coluna << "]" << endl;

  return 0;
}
