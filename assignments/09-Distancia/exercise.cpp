#include <iostream>
#include <cmath>

int main() 
{
  double x1, y1, x2, y2, distancia;
  
  std::cout << "x1:" << "\n";
  std::cin >> x1;

  std::cout << "y1:" << "\n";
  std::cin >> y1;

  std::cout << "x2:" << "\n";
  std::cin >> x2;

  std::cout << "y2:" << "\n";
  std::cin >> y2;

  distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

  std::cout << "La distancia entre ("<< x1 << "," << y1 << ") y (" << x2 << "," << y2 << ") es " << distancia <<"\n";
  
  return 0;
}
