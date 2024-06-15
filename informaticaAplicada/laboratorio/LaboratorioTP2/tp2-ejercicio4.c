#include <stdio.h>

unsigned int num, permutado, numTrunc, numMod;

int main ()
{
  printf("Indicar un valor de dos cifras:\n");
  scanf("%d", &num);

  if (num > 99)
    printf("Error de ingreso\n");
    else {
      numTrunc = num / 10;
      numMod = (num % 10) * 10;

      permutado = numTrunc + numMod;
      
      printf("valor: %d\n", num);
      printf("valor permutado es %d\n", permutado);
    }

    return 0;
      
}