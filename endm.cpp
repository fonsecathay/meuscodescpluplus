Endereço de memória
No exemplo da página anterior, o &operador foi utilizado para criar uma variável de referência. Mas também pode ser usado para obter o endereço de memória de uma variável; que é o local onde a variável é armazenada no computador.

Quando uma variável é criada em C++, um endereço de memória é atribuído à variável. E quando atribuímos um valor à variável, ele é armazenado neste endereço de memória.

Para acessá-lo, utilize o & operador, e o resultado representará onde a variável está armazenada:

Exemplo
string food = "Pizza";

cout << &food; // Outputs 0x6dfed4
Nota: O endereço de memória está no formato hexadecimal (0x..). Observe que você pode não obter o mesmo resultado em seu programa.

E por que é útil saber o endereço da memória?
Referências e ponteiros (sobre os quais você aprenderá no próximo capítulo) são importantes em C++, porque permitem manipular os dados na memória do computador - o que pode reduzir o código e melhorar o desempenho .

Esses dois recursos são uma das coisas que fazem o C++ se destacar de outras linguagens de programação, como Python e Java