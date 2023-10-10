/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file desinflado.cc
  * @author alu0101552774@ull.edu.es
  * @date 10 oct 2023
  * @brief Transfroma una mayuscula en una minuscula
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
  char UpperCase;
  std::cout << "Introduce una letra mayuscula" << std::endl;
  std::cin >> UpperCase;
  int UpperCase_ASCII = static_cast<int>(UpperCase);
  int LowerCase_ASCII = UpperCase_ASCII + 32; // Asignamos el codigo ascii de la letra pero en minuscula
  char LowerCase = static_cast<char>(LowerCase_ASCII);
  std::cout << LowerCase << std::endl;
}