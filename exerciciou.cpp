//u) Faça um programa que leia uma matriz 4X4 e imprima a média aritmética dos números das linhas e das
//colunas dessa matriz

#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int somaLinhas[4] = {0, 0, 0, 0};
    int somaColunas[4] = {0, 0, 0, 0};
    
    // Leitura dos elementos da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite o elemento da linha " << i+1 << ", coluna " << j+1 << ": ";
            cin >> matriz[i][j];
            
            // Acumula as somas para média posterior
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }
    
    // Cálculo e impressão da média das linhas
    cout << "Média aritmética das linhas:" << endl;
    for (int i = 0; i < 4; i++) {
        float mediaLinha = (float)somaLinhas[i] / 4.0;
        cout << "Linha " << i+1 << ": " << mediaLinha << endl;
    }
    
    // Cálculo e impressão da média das colunas
    cout << "Média aritmética das colunas:" << endl;
    for (int i = 0; i < 4; i++) {
        float mediaColuna = (float)somaColunas[i] / 4.0;
        cout << "Coluna " << i+1 << ": " << mediaColuna << endl;
    }
    
    return 0;
}
