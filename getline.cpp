//É possível usar o operador de extração >>on cinpara exibir uma string inserida por um usuário:
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John
No entanto, cinconsidera um espaço (espaço em branco, tabulações, etc) como um caractere de terminação, o que significa que ele pode exibir apenas uma única palavra (mesmo que você digite muitas palavras):

string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John
No exemplo acima, você espera que o programa imprima "John Doe", mas imprime apenas "John".

É por isso que, ao trabalhar com strings, costumamos usar a getline() função para ler uma linha de texto. Leva cincomo primeiro parâmetro e a variável de string como segundo:



string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John Doe