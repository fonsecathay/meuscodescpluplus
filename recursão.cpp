Recursão
Recursão é a técnica de fazer uma chamada de função em si. Esta técnica fornece uma maneira de quebrar problemas complicados em problemas simples que são mais fáceis de resolver.

A recursão pode ser um pouco difícil de entender. A melhor maneira de descobrir como funciona é experimentá-lo.

Exemplo de Recursão
Adicionar dois números é fácil, mas adicionar um intervalo de números é mais complicado. No exemplo a seguir, a recursão é usada para somar um intervalo de números, dividindo-o na simples tarefa de somar dois números:

Exemplo
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}
Exemplo explicado
Quando a sum()função é chamada, ela adiciona o parâmetro kà soma de todos os números menores que ke retorna o resultado. Quando k se torna 0, a função retorna apenas 0. Ao executar, o programa segue os seguintes passos:

10 + soma(9)
10 + ( 9 + soma(8) )
10 + ( 9 + ( 8 + soma(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + soma(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
Como a função não chama a si mesma quando ké 0, o programa para aí e retorna o resultado.

O desenvolvedor deve ter muito cuidado com a recursão, pois pode ser muito fácil escrever uma função que nunca termina ou uma que usa quantidades excessivas de memória ou poder do processador. No entanto, quando escrita corretamente, a recursão pode ser uma abordagem de programação muito eficiente e matematicamente elegante.