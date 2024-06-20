#include <stdio.h>
#define P printf
#define S scanf

int tempMedia(int*, int*);
void ingDias (int*);

int tempMaxima, tempMinima, dias;

int main () 
{
  int conteo;
  ingDias(&dias);
  switch (dias)
  {
    case 0:
      break;

    default:
        for (conteo = 1; conteo <= dias; conteo++)
        {
          P("Ingrese dia %d: \n", conteo);
          tempMedia(&tempMaxima, &tempMinima);
        }
      break;
  }
}

int tempMedia(int *tempMaxima, int *tempMinima)
{
  P("Ingrese el valor de temperaturas\n");
  P("Temperatura maxima: \n");
  S("%d", tempMaxima);
  P("Temperatura minima: \n");
  S("%d", tempMinima);

  float temp = (*tempMaxima + *tempMinima) / 2.0;
  P("La temperatura media es: %.1f\n", temp);

  return 0;
}

void ingDias(int *dias)
{
  do
  {
    P("Cuantos dias va a ingresar?\n");
    P("---Seleccione 0 para salir---\n");
    S("%d", dias);
    if(*dias > 10)
    P("Solo podemos darle un rango maximo de 10 dias\n");
  } while (*dias <0 || *dias >10);
}