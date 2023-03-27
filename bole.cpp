bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // Outputs 1 (true)
cout << isFishTasty;  // Outputs 0 (false)
int x = 10;
int y = 9;
cout << (x > y); // returns 1 (true), because 10 is higher than 9
//Ou ainda mais fácil:
//Exemplo
cout << (10 > 9);
int x = 10;
cout << (x == 10);  
cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15
Vamos pensar em um "exemplo da vida real" onde precisamos descobrir se uma pessoa tem idade para votar.

No exemplo abaixo, utilizamos o >=operador de comparação para saber se a idade ( 25) é maior OU igual ao limite de idade para votação, que é definido como 18:

Exemplo
int myAge = 25;
int votingAge = 18;

cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!
Saída "Velha o suficiente para votar!" se myAgefor maior ou igual a 18 . Caso contrário, a saída "Não tem idade suficiente para votar.":

int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  cout << "Old enough to vote!";
} else {
  cout << "Not old enough to vote.";
}

// Outputs: Old enough to vote!