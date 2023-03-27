Matrizes multidimensionais
Uma matriz multidimensional é uma matriz de matrizes.

Para declarar um array multidimensional, defina o tipo de variável, especifique o nome do array seguido de colchetes que especificam quantos elementos o array principal possui, seguido por outro conjunto de colchetes que indica quantos elementos os sub-arrays possuem :

string letters[2][4];
Assim como nos arrays comuns, você pode inserir valores com um array literal - uma lista separada por vírgulas dentro de chaves. Em uma matriz multidimensional, cada elemento em um literal de matriz é outro literal de matriz.

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
Cada conjunto de colchetes em uma declaração de array adiciona outra dimensão a um array. Diz-se que um array como o acima tem duas dimensões.

Arrays podem ter qualquer número de dimensões. Quanto mais dimensões um array tiver, mais complexo o código se torna. A matriz a seguir tem três dimensões:

string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
Acesse os elementos de uma matriz multidimensional
Para acessar um elemento de uma matriz multidimensional, especifique um número de índice em cada uma das dimensões da matriz.

Esta instrução acessa o valor do elemento na primeira linha (0) e na terceira coluna (2) do array de letras .

Exemplo
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[0][2];  // Outputs "C"

Alterar elementos em uma matriz multidimensional
Para alterar o valor de um elemento, consulte o número de índice do elemento em cada uma das dimensões:

Exemplo
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letters[0][0] = "Z";

cout << letters[0][0];  // Now outputs "Z" instead of "A"
Percorrer uma matriz multidimensional
Para percorrer um array multidimensional, você precisa de um loop para cada uma das dimensões do array.

O exemplo a seguir gera todos os elementos na matriz de letras :

Exemplo
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
}
Este exemplo mostra como percorrer um array tridimensional:

Exemplo
string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letters[i][j][k] << "\n";
    }
  }
}
Por que matrizes multidimensionais?
Arrays multidimensionais são ótimos para representar grades. Este exemplo mostra um uso prático para eles. No exemplo a seguir usamos um array multidimensional para representar um pequeno jogo de Battleship:

Exemplo
// We put "1" to indicate there is a ship.
bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;

  cout << "Selecting coordinates\n";

  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;

  // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;

  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;

    // Increase the hit counter
    hits++;

    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit! " << (4-hits) << " left.\n\n";
  } else {
    // Tell the player that they missed
    cout << "Miss\n\n";
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

cout << "Victory!\n";
cout << "You won in " << numberOfTurns << " turns";