#include <iostream>

int main() 
{
  int n1, n2;

  std::cout << "N1:" << "\n";
  std::cin >> n1;

  std::cout << "N2:" << "\n";
  std::cin >> n2;
  

  std::cout << "El resultado de SUMAR " << n1 << " y " << n2 << " es " << n1 + n2 << " \n";
  std::cout << "El resultado de RESTAR " << n1 << " y " << n2 << " es " << n1 - n2 << " \n";
  std::cout << "El resultado de MULTIPLICAR " << n1 << " y " << n2 << " es " << n1 * n2 << " \n";
  std::cout << "El resultado de DIVIDIR " << n1 << " y " << n2 << " es " << n1 / n2 << " \n";
  std::cout << "El resultado de la DIVISION DE MODULO " << n1 << " y " << n2 << " es " << n1 % n2 << " \n";
  
  return 0;
}
