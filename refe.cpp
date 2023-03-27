Criando Referências
Uma variável de referência é uma "referência" a uma variável existente e é criada com o &operador:

string food = "Pizza";  // food variable
string &meal = food;    // reference to food
Agora, podemos usar o nome da variável foodou o nome de referência meal para nos referirmos à foodvariável:

Exemplo
string food = "Pizza";
string &meal = food;

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza