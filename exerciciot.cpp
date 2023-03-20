//t) Leia uma matriz 3X3 do teclado, calcule e imprima a sua matriz transposta.

#include <iostream>

using namespace std;

int main() {
    int matriz[3][3], transposta[3][3];

    cout << "Digite os elementos da matriz 3x3:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    // Cálculo da matriz transposta
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Impressão da matriz transposta
    cout << "\nMatriz transposta:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
