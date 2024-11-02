#include <iostream>
#include <string>

int main() 
{
  float c1, c2, c3, promedio;
  std::string nombre;

  std::cout << "Tu nombre? \n";
  std::cin >> nombre;

  std::cout << "Calificacion-1:" << "\n";
  std::cin >> c1;

  std::cout << "Calificacion-2:" << "\n";
  std::cin >> c2;

  std::cout << "Calificacion-3:" << "\n";
  std::cin >> c3;

  promedio = (c1 + c2 + c3)/3;

  std::cout << " El promedio de " << nombre << " es: " << promedio << "\n";
  
  return 0;
}
