#include <iostream>

double convCelsiusKelvin(double inputCelsius){
  std::cout << "Tamaño de entrada: 1" << std::endl;
  std::cout<< "Cantidad de instrucciones: 1" << std::endl;
  return inputCelsius + 273.15;
}

double convKelvinCelsius(double inputKelvin){
  std::cout<< "Cantidad de instrucciones: 1" << std::endl;
  return inputKelvin - 273.15;
}
