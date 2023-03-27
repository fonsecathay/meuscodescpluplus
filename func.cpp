Parâmetros e Argumentos
As informações podem ser passadas para funções como um parâmetro. Os parâmetros atuam como variáveis ​​dentro da função.

Os parâmetros são especificados após o nome da função, entre parênteses. Você pode adicionar quantos parâmetros quiser, basta separá-los com uma vírgula:

Sintaxe
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
O exemplo a seguir tem uma função que recebe um fnamestring chamado como parâmetro. Quando a função é chamada, passamos um primeiro nome, que é usado dentro da função para imprimir o nome completo:

Exemplo
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes

Quando um parâmetro é passado para a função, ele é chamado de argumento . Então, do exemplo acima: fnameis a parameter , while Liam, Jennyand Anjaare arguments .

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Liam Refsnes. 3 years old.
// Jenny Refsnes. 14 years old.
// Anja Refsnes. 30 years old.