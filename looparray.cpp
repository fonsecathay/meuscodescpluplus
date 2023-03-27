Percorrer um Array
Você pode percorrer os elementos da matriz com o for loop.

O exemplo a seguir gera todos os elementos no array cars :

Exemplo
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
}
Este exemplo gera o índice de cada elemento junto com seu valor:

Exemplo
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << i << " = " << cars[i] << "\n";
}
E este exemplo mostra como percorrer um array de inteiros:

Exemplo
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
  cout << myNumbers[i] << "\n";
}
O loop foreach
Há também um " loop for-each " (introduzido em C++ versão 11 (2011), que é usado exclusivamente para percorrer elementos em um array:

Sintaxe
for (type variableName : arrayName) {
  // code block to be executed
}
O exemplo a seguir gera todos os elementos em uma matriz, usando um " loop for-each ":

Exemplo
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}