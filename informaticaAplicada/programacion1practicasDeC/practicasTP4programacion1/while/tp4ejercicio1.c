/*Calcular el factorial de un número ingresado por el usuario.*/

#include <stdio.h>
#define P printf
#define S scanf

int main ()
{
  int num, rest = 1;

  P("Ingrese un valor para obtener su factorial\n");
  S("%d", &num);

  for(int i = num; i > 0; i--)
  {
    rest = rest * i;

    P("valor de i %d\n", i);
    P("El valor del factorial es: %d\n", rest);
  }
    
}


