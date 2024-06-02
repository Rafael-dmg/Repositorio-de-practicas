#include <stdio.h>
#define P printf
#define S scanf

int main ()
{
  int num1, num2;

  P("Ingrese valor 1: \n");
  S("%d", &num1);
  P("Ingrese valor 2: \n");
  S("%d", &num2);
  

  if(num1 != num2)
  {
    if(num1 < num2)
      P("num2 es mayor y num1 es menor\n");
      else
      P("num1 es mayor y num2 es menor\n");
  
  }
  else
    P("son iguales\n");
    
}