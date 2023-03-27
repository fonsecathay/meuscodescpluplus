Métodos de classe
Métodos são funções que pertencem à classe.

Existem duas maneiras de definir funções que pertencem a uma classe:

Definição de classe interna
Definição de classe externa
No exemplo a seguir, definimos uma função dentro da classe e a nomeamos " myMethod".

Observação: você acessa os métodos da mesma forma que acessa os atributos; criando um objeto da classe e usando a sintaxe de ponto ( .):

Exemplo interno
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
Para definir uma função fora da definição de classe, você deve declará-la dentro da classe e depois defini-la fora da classe. Isso é feito especificando o nome da classe, seguido do ::operador de resolução de escopo, seguido do nome da função:

Exemplo Externo
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}