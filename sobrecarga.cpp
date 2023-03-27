Sobrecarga de funções
Com sobrecarga de função , várias funções podem ter o mesmo nome com diferentes parâmetros:

Exemplo
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)
Considere o exemplo a seguir, que possui duas funções que somam números de tipos diferentes:

Exemplo
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
Em vez de definir duas funções que devem fazer a mesma coisa, é melhor sobrecarregar uma.

No exemplo abaixo, sobrecarregamos a plusFuncfunção para funcionar para ambos int e double:

Exemplo
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
Nota: Várias funções podem ter o mesmo nome, desde que o número e/ou o tipo de parâmetros sejam diferentes.