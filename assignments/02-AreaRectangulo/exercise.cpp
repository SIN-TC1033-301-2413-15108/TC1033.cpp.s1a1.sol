#include <iostream>

int main() 
{
  float base, altura;
  float area;

  base = 10.0f;
  altura = 5.0f;

  area = base * altura;

  std::cout << "Area de rectangulo con base " << base << " y altura " << altura << " es " << area << "\n";
  
  return 0;
}
