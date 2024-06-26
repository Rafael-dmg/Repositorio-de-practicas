#include <stdio.h>
#define P printf
#define S scanf 

int login (int*, char*);

int main(void)
{
  int dni, intentos = 0;
  char passw;

do
{
  login(&dni, &passw);

  if (dni != 19083959)
  {
    P("error\n");
    intentos += 1;
  }

} while (intentos != 3);

  
  
}

int login (int *dni, char *passw)
{
  P("Ingrese su documento\n");
  S("%d", dni);
  P("Ingrese password\n");
  S("%s", passw);

  return 0;
}