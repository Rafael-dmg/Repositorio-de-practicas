#include <stdio.h>
#include <string.h>
#define P printf
#define S scanf

int Dimension(char[]);


int main()
{
  int strn[80];

  Dimension(strn);

  P("El largo de la frase es: %d\n",strlen(strn));
  // P("%s\n", *strn);

  return 0;
}

int Dimension(char *strn)
{
  P("Ingrese una frase\n");
  //gets(strn);
  S("%s", strn);

  return *strn;
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




