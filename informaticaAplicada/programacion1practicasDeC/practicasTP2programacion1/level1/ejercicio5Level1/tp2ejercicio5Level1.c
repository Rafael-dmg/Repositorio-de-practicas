#include <stdio.h>
#define P printf
#define S scanf

int main ()
{
  int km, metro, cent, resto, totalCent;

  P("Ingrese cantidad de centimetros: \n");
  S("%d", &cent);

  if(cent <= 0)
    P("Ingrese un valor de centimetros positivo\n");
  else
  {
    km = cent / 100000;
    resto = cent % 100000;
    metro = resto / 100;
    totalCent = resto % 100;

    P("Los centimetros ingresados son: %d\n", cent);
    P("Kilometros: %d\n", km);
    P("Metros: %d\n", metro);
    P("Centimetros: %d\n", totalCent);
  }


  return 0;
}