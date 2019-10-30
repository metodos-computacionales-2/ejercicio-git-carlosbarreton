#include <iostream>
#include <cmath>

double diametro(int);
double perimetro(int);
double area(int);

int main () {
  std::cout << "Ingrese un valor para el radio de un circulo" << std::endl;
  int N;
  std::cin >> N;
  
  std::cout << "El diametro es " << diametro(N) << std::endl;
  std::cout << "El perimetro es " << perimetro(N) << std::endl;
  std::cout << "El area es " << area(N) << std::endl;
}

double diametro(int x) {
  return 2*x;
}

double perimetro(int x) {
  return 2*M_PI*x;
}

double area(int x) {
  return M_PI*x*x;
}
