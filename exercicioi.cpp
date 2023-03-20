#include<iostream>

using namespace std;

int main(){

    int matriz[4][4], count = 0;

    // lendo a matriz
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << "Digite o valor para a posicao ["<<i<<"]["<<j<<"]: ";
            cin >> matriz[i][j];
            // verifica se o valor inserido é maior que 10
            if(matriz[i][j] > 10){
                count ++;
            }
        }
    }

    cout << "A matriz possui " << count << " valores maiores que 10" << endl;

    return 0;
}
