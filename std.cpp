Você pode ver alguns programas C++ executados sem a biblioteca de namespace padrão. A using namespace stdlinha pode ser omitida e substituída pela stdpalavra-chave, seguida pelo ::operador para string(e cout) objetos:
#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}