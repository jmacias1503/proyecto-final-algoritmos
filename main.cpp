#include <vector>
#include <iostream>

int instruccionesMetrosPies = 0;

// complejidad linear
std::vector<double> convMetrosPies(std::vector<double> inputMetros, int size){
  for(int i = 0; i < inputMetros.size(); i++) {
    inputMetros[i] = inputMetros[i] / 0.3048;
    instruccionesMetrosPies++;
  }
  std::cout << "Tamaño de entrada: " << size << std::endl;
  std::cout << "Cantidad de instrucciones: " << instruccionesMetrosPies << std::endl;
  return inputMetros;
}

// complejidad constante
double convCelsiusKelvin(double inputCelsius){
  std::cout << "Tamaño de entrada: 1" << std::endl;
  std::cout<< "Cantidad de instrucciones: 1" << std::endl;
  return inputCelsius + 273.15;
}

// complejidad logaritmica
int instruccionesCaloriasJoules = 0;
double convCaloriasJoules(double inputArr[], double valorABuscar, int maximo, int minimo, int size) {
  while (minimo <= maximo) {
    int medio = minimo + (maximo - minimo) / 2;
    instruccionesCaloriasJoules += 2;
    if (inputArr[medio] < valorABuscar) {
      minimo = medio;
    }
    else if (inputArr[medio] > valorABuscar) {
      maximo = medio;
    }
    else {
      instruccionesCaloriasJoules++;
      std::cout << "Tamaño de entrada: " << size << std::endl;
      std::cout << "Cantidad de instrucciones: " << instruccionesCaloriasJoules << std::endl;
      return inputArr[medio] * 4.1868;
    }
    instruccionesCaloriasJoules++;
  }
  return -1;
}

int main(){
  std::vector<double> metros;
  double inputMetros = 2;
  do {
    std::cout << "Ingresa un valor (ingresa 0 para terminar): ";
    std::cin >> inputMetros;
    metros.push_back(inputMetros);
  } while(inputMetros != 0);
  std::vector<double> conversion = convMetrosPies(metros, metros.size());
  for(double i: conversion){
    std::cout << i << "ft ";
  }
  std::cout << std::endl;

  int sizeOpciones;
  std::cout << "Ingresa cuantos valores tendrá el arreglo: ";
  std::cin >> sizeOpciones;
  double opcionesCJ[sizeOpciones];
  for(int i = 0; i < sizeOpciones; i++) {
    opcionesCJ[i] = i + 1;
  }
  double opcionCJ;
  std::cout << "Elige un valor para convertir (del 1 al " << sizeOpciones << "): ";
  std::cin >> opcionCJ;
  double valorCJ = convCaloriasJoules(opcionesCJ, opcionCJ, sizeOpciones, 0, sizeOpciones);
  std::cout << valorCJ << "J" << std::endl;

  double inputTemperatura;
  std::cout << "Ingresa la temperatura a convertir: ";
  std::cin >> inputTemperatura;
  double tempConv = convCelsiusKelvin(inputTemperatura);
  std::cout << tempConv << "K";
  return 0;
}
