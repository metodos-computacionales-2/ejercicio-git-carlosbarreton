#include <iostream>
#include <cmath>

int main() {
  int a;
  int b;
  int c;
  
  std::cout << "Ingrese tres numeros enteros" << std::endl;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  
  if (forman_triangulo(a,b,c)) {
    std::cout << "Los numeros pueden representar un triangulo rectangulo" << std::endl;
  else {
    std::cout << "Los numero NO pueden representar un triangulo rectangulo" << std::endl;
  }
}
