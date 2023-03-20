//p) Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas. Ler
//um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).

#include <iostream>
using namespace std;

int main() {
    // Inicializando as matrizes com valores pré-definidos
    int matriz1[4][4] = {{2, 5, 8, 1}, {3, 0, 7, 6}, {9, 4, 1, 5}, {2, 2, 2, 2}};
    int matriz2[4][4] = {{1, 6, 9, 4}, {8, 4, 2, 1}, {7, 3, 1, 5}, {3, 3, 3, 3}};
    
    // Matriz que armazenará os maiores valores de cada posição das matrizes lidas
    int matriz3[4][4];

    // Preenchendo a matriz3 com os maiores valores
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if (matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }
    
    // Exibindo a matriz3
    cout << "Matriz resultante dos maiores valores:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }
    
    // Verificando se um valor é positivo ou negativo
    int valor;
    cout << "Digite um valor: ";
    cin >> valor;
    
    if (valor >= 0) {
        cout << "O valor digitado é positivo." << endl;
    } else {
        cout << "O valor digitado é negativo." << endl;
    }
    
    return 0;
}
