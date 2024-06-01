#include <stdio.h>
#include <string.h>

int main() {
  int num;

  // Ingresar el número
  printf("Ingrese un número: ");
  scanf("%d", &num);

  if ((num < 100 && num > -100) || num > 999 || num < -999) {
    printf("error");
}


  return 0;
}
