#include <iostream>
#include <cmath>

int main() 
{
  float lado_a, lado_b, hipotenusa;
  
  std::cout << "Lado a:" << "\n";
  std::cin >> lado_a;

  std::cout << "Lado b:" << "\n";
  std::cin >> lado_b;

  hipotenusa = sqrt(pow(lado_a,2) + pow(lado_b,2) );

  std::cout << "La hipotenusa del Triángulo Rectángulo de datos "<< lado_a << " y " << lado_b << " es " << hipotenusa <<"\n";
  
  return 0;
}
