/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file arithmetic_operators.cc
  * @author alu0101552774@ull.edu.es
  * @date 10 oct 2023
  * @brief Muestra las distinas operaciones aritmeticas con 2 operandos 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
  int operando_1 = 10, operando_2 = 2;
  std::cout << "------------------" << std::endl;
  std::cout << "Suma: " << operando_1 <<" + " << operando_2 << " = " << operando_1 + operando_2 << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "Resta: " << operando_1 <<" - " << operando_2 << " = " << operando_1 - operando_2 << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "Multiplicacion: " << operando_1 <<" * " << operando_2 << " = " << operando_1 * operando_2 << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "Division: " << operando_1 <<" / " << operando_2 << " = " << operando_1 / operando_2 << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "Resto: " << operando_1 <<" % " << operando_2 << " = " << operando_1 % operando_2 << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "Mayor que: ¿" << operando_1 <<" > " << operando_2 << "? Verdadero" << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "Menor que: ¿" << operando_1 <<" < " << operando_2 << "? Falso" << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "Igual: ¿" << operando_1 <<" = " << operando_2 << "? Falso" << std::endl;  
}