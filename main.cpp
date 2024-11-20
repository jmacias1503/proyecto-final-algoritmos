#include <vector>
#include <iostream>

int contadorMetrosPies = 0;
int instruccionesMetrosPies = 0;

std::vector<double> convMetrosPies(std::vector<double> inputMetros, int size){
  inputMetros[contadorMetrosPies] = inputMetros[contadorMetrosPies] / 0.3048;
  contadorMetrosPies++;
  instruccionesMetrosPies += 2;
  if (contadorMetrosPies < size) {
    instruccionesMetrosPies++;
    convMetrosPies(inputMetros, size);
  }
  std::cout << "Tamaño de entrada: " << size << std::endl;
  std::cout<< "Cantidad de instrucciones: " << instruccionesMetrosPies << std::endl;
  return inputMetros;
}

int contadorPiesMetros = 0;
int instruccionesPiesMetros = 0;

std::vector<double> convPiesMetros(std::vector<double> inputPies, int size){
  inputPies[contadorPiesMetros] = inputPies[contadorPiesMetros] * 0.3048;
  contadorPiesMetros++;
  instruccionesPiesMetros+= 2;
  if (contadorPiesMetros < size) {
    instruccionesPiesMetros++;
    convPiesMetros(inputPies, size);
  }
  std::cout << "Tamaño de entrada: " << size << std::endl;
  std::cout<< "Cantidad de instrucciones: " << instruccionesPiesMetros << std::endl;
  return inputPies;
}

int main(){
  std::vector<double> metros = {4.420420, 3.420754320, 74.42705342};

  std::vector<double> conversion = convMetrosPies(metros, metros.size());

  for(int i: conversion) {
    std::cout << i;
  }
  return 0;
}
