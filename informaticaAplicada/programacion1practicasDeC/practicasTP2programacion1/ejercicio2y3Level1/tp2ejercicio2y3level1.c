#include <stdio.h>
#include <math.h>
#define P printf
#define S scanf

int main ()
{
  int num1,num2, total;

  P("Ingrese el dividendo: \n");
  S("%d", &num1);
  P("Ingrese el divisor: \n");
  S("%d", &num2);

  if(num2<=0)
    P("No se puede dividir entre cero");
  else  
    total = num1 / num2;

  P("El resultado de la operacion es: %d\n", total);  
}