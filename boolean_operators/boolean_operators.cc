/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file boolean_operators.cc
  * @author alu0101552774@ull.edu.es
  * @date 10 oct 2023
  * @brief Muestra la tabla de la verdad de dos variables con las operaciones and, or y not
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
  // valores 0 0
  bool variable_A = false, variable_B = false;
  bool operador_and = variable_A && variable_B;
  bool operador_or = variable_A || variable_B;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "Si A = 0 y B = 0 :" << std::endl;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "A and B = " << operador_and << std::endl;
  std::cout << "A or B = " << operador_or << std::endl;
  std::cout << "not A = " << !variable_A << "  not B = " << !variable_B << std::endl;
  // valores 0 1
  variable_A = false, variable_B = true;
  operador_and = variable_A && variable_B;
  operador_or = variable_A || variable_B;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "Si A = 0 y B = 1 :" << std::endl;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "A and B = " << operador_and << std::endl;
  std::cout << "A or B = " << operador_or << std::endl;
  std::cout << "not A = " << !variable_A << "  not B = " << !variable_B << std::endl;
  // valores 1 0
  variable_A = true, variable_B = false;
  operador_and = variable_A && variable_B;
  operador_or = variable_A || variable_B;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "Si A = 1 y B = 0 :" << std::endl;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "A and B = " << operador_and << std::endl;
  std::cout << "A or B = " << operador_or << std::endl;
  std::cout << "not A = " << !variable_A << "  not B = " << !variable_B << std::endl;
  // valores 1 1
  variable_A = true, variable_B = true;
  operador_and = variable_A && variable_B;
  operador_or = variable_A || variable_B;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "Si A = 1 y B = 1 :" << std::endl;
  std::cout << "----------------------------------------" << std::endl;
  std::cout << "A and B = " << operador_and << std::endl;
  std::cout << "A or B = " << operador_or << std::endl;
  std::cout << "not A = " << !variable_A << "  not B = " << !variable_B << std::endl;
}