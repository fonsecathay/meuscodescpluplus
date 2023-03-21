/*Para obter o comprimento de uma string, use a length()função:*/
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();

#include <iostream>

using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
    //pode usar size tbm
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size(); 
    return 0;
    /*Você pode acessar os caracteres em uma string referindo-se ao seu número de índice entre colchetes [].*/
    string myString = "Hello";
    cout << myString[0];// Outputs H
    string myString = "Hello";
    cout << myString[1];
    // Outputs e
    /*Para alterar o valor de um caractere específico em uma string, consulte o número do índice e use aspas simples:*/
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
    // Outputs Jello instead of Hello
    
}