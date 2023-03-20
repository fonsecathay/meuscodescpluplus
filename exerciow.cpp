//w) Ler uma matriz de dimensões especificadas pelo usuário e imprima a soma das linhas e colunas dessa matriz

#include <iostream>

using namespace std;

int main() {
  int linhas, colunas;
  cout << "Digite a quantidade de linhas e colunas da matriz: ";
  cin >> linhas >> colunas;

  int matriz[linhas][colunas];

  // Leitura dos elementos da matriz
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << ": ";
      cin >> matriz[i][j];
    }
  }

  // Cálculo da soma das linhas e colunas
  int soma_linhas, soma_colunas;

  for (int i = 0; i < linhas; i++) {
    soma_linhas = 0;
    for (int j = 0; j < colunas; j++) {
      soma_linhas += matriz[i][j];
    }
    cout << "Soma dos elementos da linha " << i+1 << ": " << soma_linhas << endl;
  }
  
  for (int j = 0; j < colunas; j++) {
    soma_colunas = 0;
    for (int i = 0; i < linhas; i++) {
      soma_colunas += matriz[i][j];
    }
    cout << "Soma dos elementos da coluna " << j+1 << ": " << soma_colunas << endl;
  }

  return 0;
}
