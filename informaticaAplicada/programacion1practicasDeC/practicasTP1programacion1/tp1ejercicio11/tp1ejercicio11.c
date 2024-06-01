/*11. Desarrolla un algoritmo que permita leer 2 valores y emitir por pantalla 
la suma de los dos, la resta, producto, división, promedio y 
el doble producto del primero menos la mitad del segundo.   */

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