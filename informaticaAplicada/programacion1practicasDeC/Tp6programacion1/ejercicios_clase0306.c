#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define P printf
#define S scanf

void Dimension(char[]);


int main()
{
  int strn[80];

  Dimension(strn);

  P("El largo de la frase es: %d\n",strlen(strn));
  // P("%s\n", *strn);

  return 0;
}

void Dimension(char strn[])
{
  P("Ingrese una frase\n");
  //gets(strn);
  fgets(strn, 80,stdin);

  
}

// int main()
// {
//   int strn[80];

//   Dimension(strn);

//   P("El largo de la frase es: %d\n",strlen(strn));
// }

// int Dimension(int *strn)
// {
//   P("Ingrese una frase\n");
// //gets(strn);
//   S("%d", strn);

//   return *strn;
// }




