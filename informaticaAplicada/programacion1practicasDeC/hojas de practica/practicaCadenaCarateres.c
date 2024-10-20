#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define p printf
#define s scanf
#define long_ 5

char miVector[long_];

void CargarVector();
void MostrarVector();
void PasaMinuscula(); 
//void Invertir();

int main()
{
 CargarVector();
 MostrarVector();
 //PasaMinuscula(miVector);
 
}

void CargarVector()
{
  scanf("%[^\n]", miVector);
  //fgets(miVector,long_,stdin);

}

void MostrarVector()
{
  PasaMinuscula();
  p("\nEl contenido de la cadena es: \n  %s", miVector);
  p("\n\nel largo del vector es:%d ", strlen(miVector));
}

void PasaMinuscula()
{
  for (int i = 0; miVector[i] != '\0'; i++) {
        miVector[i] = tolower(miVector[i]);
    }
}