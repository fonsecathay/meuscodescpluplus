Crie uma classe chamada " MyClass":

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};A classpalavra-chave é usada para criar uma classe chamada MyClass.
A publicpalavra-chave é um especificador de acesso , que especifica que os membros (atributos e métodos) da classe são acessíveis de fora da classe. Você aprenderá mais sobre os especificadores de acesso posteriormente.
Dentro da classe, há uma variável inteira myNume uma variável string myString. Quando as variáveis ​​são declaradas dentro de uma classe, elas são chamadas de atributos .
Por fim, finalize a definição da classe com um ponto e vírgula ;.

Crie um objeto chamado " myObj" e acesse os atributos:

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
Você pode criar vários objetos de uma classe:
// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}