#include <iostream>

double f(int);

int main () {
  std::cout << "Ingrese el numero de elementos a ver" << std::endl;
  int N;
  std::cin >> N;
  
  for (int i = 0; i < N; i++) {
    if (i%2 == 0) {
      std::cout << f(i) << "\t" << i << std::endl;
    }
  }
}

double f(int x) {
  return x*x;
}
