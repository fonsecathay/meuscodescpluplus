void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
  A função ( myFunction) recebe um array como seu parâmetro ( int myNumbers[5]) e percorre os elementos do array com o forloop.

Quando a função é chamada dentro de main(), passamos o myNumbers array, que gera os elementos do array.

Observe que, ao chamar a função, você só precisa usar o nome do array ao passá-lo como argumento myFunction(myNumbers). No entanto, a declaração completa do array é necessária no parâmetro da função ( int myNumbers[5]).