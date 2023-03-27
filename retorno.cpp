Valores de retorno
A voidpalavra-chave, utilizada nos exemplos anteriores, indica que a função não deve retornar um valor. Se quiser que a função retorne um valor, você pode usar um tipo de dados (como int, string, etc.) em vez de void, e usar a return palavra-chave dentro da função:

Exemplo
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}

// Outputs 8 (5 + 3)
Este exemplo retorna a soma de uma função com dois parâmetros :

Exemplo
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction(5, 3);
  return 0;
}

// Outputs 8 (5 + 3)
Você também pode armazenar o resultado em uma variável:

Exemplo
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}
// Outputs 8 (5 + 3)

passar por referencia
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}