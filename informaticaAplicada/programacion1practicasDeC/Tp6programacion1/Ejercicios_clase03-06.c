#include <stdio.h>
#include <string.h>
#define P printf
#define S scanf

int Dimension(int*);


int main()
{
  int strn;

  Dimension(strn);

  // P("%s\n", *strn);
}

int Dimension(int *strn)
{
  P("Ingrese una frase\n");
  //gets(strn);
  S("%d", strn);

  P("El largo de la frase es: %d\n",strlen(strn));

  return *strn;
}