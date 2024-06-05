/*Calcular el factorial de un número ingresado por el usuario.*/

#include <stdio.h>
#define P printf
#define S scanf

void holaMundo (void);
void cargarDatos(int*);

int main ()
{
  int num, rest = 1;

  cargarDatos(&num);


  for(int i = num; i > 0; i--)
  {
    rest = rest * i;

    P("valor de i %d\n", i);
    P("El valor del factorial es: %d\n", rest);
  }
    holaMundo();
}

void holaMundo (void)
{
  printf("Hola, mundo\n");
}

void cargarDatos(int* num)
{
    P("Ingrese un valor para obtener su factorial\n");
    S("%d", num);
}