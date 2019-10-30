#include <iostream>

double f(int);

int main () {
  std::cout << "Ingrese un valor para el radio de un circulo" << std::endl;
  int N;
  std::cin >> N;
  
  std::cout << "El diametro es " << diametro(N) << std::endl;
  std::cout << "El perimetro es " << perimetro(N) << std::endl;
  std::cout << "El area es " << area(N) << std::endl;
}

double f(int x) {
  return x*x;
}
