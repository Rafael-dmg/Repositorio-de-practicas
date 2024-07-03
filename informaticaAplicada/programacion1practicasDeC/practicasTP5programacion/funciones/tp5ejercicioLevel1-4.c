#include <stdio.h>
#include <string.h>
#define P printf
#define S scanf 

int login (int*, char*);

int main(void)
{
  int dni, intentos = 0, exito = 0;
  char passw[6];

do
{
  login(&dni, passw);

  if (dni != 19083959 && strcmp(passw, "123456") != 0)
  {
    P("error\n");
    intentos += 1;
  } else 
  {
    P("Clave ingresada correctamente");
    exito +=1;
  }

  if (intentos == 3)
  P("Alcanzaste el maximo de intentos posibles! Por favor contacte con soporte\n");
} while (intentos != 3 && exito != 1);

  
  
}

int login (int *dni, char *passw)
{
  P("Ingrese su documento\n");
  S("%d", dni);
  P("Ingrese password\n");
  S("%s", passw);

  return 0;
}