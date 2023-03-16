/*Faça uma struct que armazene uma data (dd/mm/yyyy) e que o
usuário informa quantas datas ele deseja informar.
#include <iostream>*/

using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    int num_datas;

    cout << "Digite o número de datas que deseja informar: ";
    cin >> num_datas;

    for (int i = 0; i < num_datas; i++) {

    Data data;
        cout << "Digite o dia da " << i+1 << "ª data: ";
        cin >> data.dia;

        cout << "Digite o mês da " << i+1 << "ª data: ";
        cin >> data.mes;

        cout << "Digite o ano da " << i+1 << "ª data: ";
        cin >> data.ano;
      }
    return 0;
}


