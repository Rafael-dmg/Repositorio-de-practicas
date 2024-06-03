#include <stdio.h>
#include <math.h>
#define P printf
#define S scanf 
 
  int main()
  {
      int anio, verificacion;

    P("Ingresar un a%co: \n", 164);
    S("%d", &anio);

    verificacion = anio % 4;

    if(verificacion == 0)
      P("el a%co es biciesto", 164);
    else
      P("El a%co no es biciesto", 164);
  }