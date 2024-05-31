#include <stdio.h>

int main()
{
  int num1, num2, suma, resta, multiplicacion;
  float division;

  printf("Ingrese primer valor para operar\n");
  scanf("%d", &num1);
  printf("Ingrese segundo valor para operar\n");
  scanf("%d", &num2);

  suma = num1 + num2;

  resta = num1 - num2;
 
  multiplicacion = num1 * num2;

  division = num1 / num2;

  printf("la suma es: %d\n", suma);
  printf("la resta es: %d\n",  resta);

  printf("la multiplicacion es: %d\n", multiplicacion);

  printf("la division es : %.2f\n",division);


}