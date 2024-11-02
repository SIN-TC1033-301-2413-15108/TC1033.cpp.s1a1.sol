#include <iostream>

int main() 
{
  int precio, tax, precio_final;

  std::cout << "Precio base del producto:" << "\n";
  std::cin >> precio;

  std::cout << "Impuesto (% IVA):" << "\n";
  std::cin >> tax;
  
  precio_final = precio + precio * tax / 100;

  std::cout << "El precio del producto con el " << tax << "% de impuesto es $" << precio_final << "\n";
  
  return 0;
}
