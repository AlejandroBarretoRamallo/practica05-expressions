/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P48107_Integer_division_and_remainder_of_two_natural_numbers.cc
  * @author alu0101552774@ull.edu.es
  * @date 10 oct 2023
  * @brief Imprime por pantalla la division y el resto de dos numeros enteros
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
  int operando_1, operando_2;
  std::cin >> operando_1 >> operando_2;
  std::cout << operando_1 / operando_2 << " " << operando_1 % operando_2 << std::endl;
}