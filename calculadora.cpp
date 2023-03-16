//Desenvolva uma pequena calculadora para resolver a exponenciação, a potência e a raiz quadrada, de acordo com a escolha do usuario. Utilizar função
#include <iostream>
#include <cmath>

// Funções para calcular exponenciação, potência e raiz quadrada
float exponenciacao(float base, float expoente) {
  return pow(base, expoente);
}

float potencia(float base, float potencia) {
  return pow(base, potencia);
}

float raiz_quadrada(float numero) {
  return sqrt(numero);
}

int main() {
  int escolha = 0;
  float num, expo, resultado = 0;
  
  // pedindo ao usuário para selecionar qual operação realizar
  cout << "Selecione a operacao desejada:\n";
  cout << "1. Exponenciacao\n";
  cout << "2. Potencia\n";
  cout << "3. Raiz quadrada\n";
  cin >> escolha;
  
  switch (escolha) {
    case 1:
      // ler base e expoente
      cout << "Digite a base: ";
      cin >> num;
      cout << "Digite o expoente: ";
      cin >> expo;
      resultado = exponenciacao(num, expo);
      cout << "O resultado eh : " << resultado << endl;
      break;
    case 2:
      // ler base e potencia
      cout << "Digite a base: ";
      cin >> num;
      cout << "Digite a potencia: ";
      cin >> expo;
      resultado = potencia(num, expo);
      cout << "O resultado eh : " << resultado << endl;
      break;
    case 3:
      // ler número para calcular a raiz quadrada
      cout << "Digite um numero: ";
      cin >> num;
      resultado = raiz_quadrada(num);
      cout << "O resultado eh : " << resultado << endl;
      break;
    default:
      cout << "Opcao invalida.\n";
      break;
  }
  
  return 0;
}
