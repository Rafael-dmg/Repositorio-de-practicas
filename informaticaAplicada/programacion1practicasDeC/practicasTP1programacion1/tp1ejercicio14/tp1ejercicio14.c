/*14. Construye un programa que pregunte los años que tienes y emita como respuesta el número de días vividos.   */

#include <stdio.h>

int main (void)
{
  int anios, diasVividos;

  printf("¿Cuantos años tienes?\n");
  scanf("%d", &anios);

  diasVividos = anios * 365;

  //y si el año es biciesto?
  //no estamos contabilizando el mes en el que nacio
  //podemos tambien mejorarlo indicando si es menos o mayor de edad

  printf("Ud ha vivido la cantidad de dias aproximada de: %d", diasVividos);

  return 0;
}

/*
En este ejericio lo podemos mejorar aumentando la cantidad de informacion que necesitamos, por ejemplo calcular la cantidad exacta de años preguntando 
la fecha de nacimiento exacta.
¿Como hacerlo?

*/