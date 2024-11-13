# Proyecto final de algoritmos. Conversor de Unidades con Enfoque en Complejidad

Crear un programa que convierta entre diferentes unidades (por ejemplo, metros a pies, Celsius a Fahrenheit) y que permita evaluar el tiempo de ejecución de cada conversión. Deben añadir funciones con diferente complejidad para experimentar cómo afectan al rendimiento, introduciendo el análisis de complejidad de algoritmos.

## Requerimientos funcionales del proyecto

- El programa deberá desplegar una interfaz donde pueda listar todas las conversiones de unidades
- La función deberá de recibir un arreglo de números que convertirá a una unidad
- El usuario ingresará los valores deseados a convertir
- En cada archivo `.h`, se trabajará la conversión de una unidad a otra, y viceversa
- El programa principal deberá de medir el tiempo de la ejecución de la función elegida junto con los datos que recibió

## Flujo de trabajo

### Trabajo colaborativo

- Se trabajará con forks, cada que se suban cambios, se hará una pull request a la rama dev
- Todo cambio nuevo será implementado principalmente a `dev`, una vez corroborados los cambios, se enviarán a la rama `master`
- La arquitectura de los archivos `.h` será en base a la programación orientada a objetos

```cpp
// Librerías
#include<iostream>

// atributos
int ejemplo = 2;

// metodos

public void convertirUnidad(int x){
}
```

### Prácticas para la base de código

- Cada persona involucrada trabajará en su propio archivo de extensión `.h` para evitar merge conflicts.
- No se utilizará el `namespace std`, por lo tanto, todos los comandos que lo necesiten serán concatenados junto con `std::` para su correcto funcionamiento
