// 18. Construye un programa que permita ingresar la superficie de un cuadrado (en m2), el mismo debe emitir por pantalla su perímetro.  

#include <stdio.h>
#include <math.h>
#define P printf
#define S scanf

int main ()
{

  float area, perimetro, lado;

  P("Ingrese los m2 del area: \n");
  S("%f", &area);

  lado = sqrt(area);
  perimetro = lado * 4;

  P("La longitud del lado es: %.2f\n", lado);
  P("El perimetro del cuadrado es: %.2f\n", perimetro);

  return 0;
}