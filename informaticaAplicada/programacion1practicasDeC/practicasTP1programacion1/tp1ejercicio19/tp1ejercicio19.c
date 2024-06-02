#include <stdio.h>
#include <math.h>
#define P printf
#define S scanf

int main ()
{
  int tiempo1, tiempo2, hora1, hora2, min1, min2, seg1, seg2, thora, tmin, tseg;

  // P("Ingrese hora 1 y hora 2\n");
  // P("Hora 1\n");
  // S("%d");
  // P("Hora 2\n");
  // S("%d");


   P("Ingrese la hora 1 como un numero de 6 cifras\n");
   S("%d", &tiempo1);

    hora1 = tiempo1 / 10000;
    min1 = (tiempo1 / 100) % 100;
    seg1 = tiempo1 % 100;

    P("Horas: %d\n", hora1);
    P("Minutos: %d\n", min1);
    P("Segundos: %d\n", seg1);

    P("Ingrese la hora 2 como un numero de 6 cifras\n");
    S("%d", &tiempo2);

    hora2 = tiempo2 / 10000;
    min2 = (tiempo2 / 100) % 100;
    seg2 = tiempo2 % 100;
    
    P("Horas: %d\n", hora2);
    P("Minutos: %d\n", min2);
    P("Segundos: %d\n", seg2);

    thora = hora1 + hora2;
    tmin = min1 + min2;
    tseg = seg1 + seg2;

  if(tseg >= 60)
  {
    tmin += 1;
    tseg -= 60;
  }

  if(tmin >= 60)
  {
    thora += 1;
    tmin -= 60;
  }

  P("El total de Horas es: %d\n", thora);
  P("El total de Minutos es: %d\n", tmin);
  P("El total de Segundos es: %d\n", tseg);

    
  return 0;

}