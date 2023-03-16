#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  int i;
  int vetor[10];
  srand(time(NULL));//semente de aleatoriedade
  for(i = 0; i < 10; i++){
    vetor [i] = rand ();
  }
  for(i = 0; i < 10; i++){
    std ::cout<< vetor[i] << "" << endl;
  }
  return 0;
}