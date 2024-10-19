#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define p printf
#define s scanf
#define long_ 80

char miVector[long_];

void CargarVector();
void MostrarVector();

int main()
{
 CargarVector();
 MostrarVector();
 //strlen(miVector);
}

void CargarVector()
{
  
  gets(miVector);

  //strlen(miVector);
}

void MostrarVector()
{
  p("\nEl contenido de la cadena es: %s", miVector);
  //p("\nEl largo de la cadena es %s", strlen(miVector));
}