#include <iostream>
#include <ctime>
using namespace std;

int main(){
  time_t segundos;

  segundos = time(NULL);
  cout << "Segundos desde 1° de janeiro de 1970: = %ld\n" << segundos << endl;

  return 0;
}