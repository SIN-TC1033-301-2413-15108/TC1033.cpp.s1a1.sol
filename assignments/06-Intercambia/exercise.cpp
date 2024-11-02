#include <iostream>

int main() 
{
  double n1, n2, buffer;

  std::cout << "n1:" << "\n";
  std::cin >> n1;

  std::cout << "n2:" << "\n";
  std::cin >> n2;

  buffer = n1;
  n1 = n2;
  n2 = buffer;
  
  std::cout << "n1=" << n1 << " se ha intercambiado como n2= " << n2 << "\n";
  
  return 0;
}
