#include <stdio.h>

float num, num2, cociente;
//falta completar el resto del ejercicio
int main() {
  

  // Ingresar el número
  printf("Ingrese un número: ");
  scanf("%f", &num);
  printf("Ingrese otro número: ");
  scanf("%f", &num2);



//   if ((num < 100 || num > 999) && (num>-100 || num < -999)) {
//     printf("error");
// }
  if (num != 0 && num2 != 0)
  {
    cociente = num / num2;
      printf("el valor del cociente es: %.2f\n", cociente);
  }
    
    else
      printf("no se puede dividir entre cero\n");

    
  return 0;
}
