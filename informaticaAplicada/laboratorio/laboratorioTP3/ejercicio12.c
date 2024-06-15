// #include <stdio.h>

// int valorEntero, a, b ,c;

// int main () 
// {
//   printf("Ingrese un valor de 3 cifras\n");
//   scanf("%d", &valorEntero);

//     a = valorEntero/100;
//     b = valorEntero/10 % 10;
//     c = valorEntero % 10;

//     if (valorEntero < 100 || valorEntero > 1000)
//       printf("Ingrese un valor valido\n");
//       else {
//         printf("El valor dado es: %d\n", valorEntero);
//         printf("El valor ordenado es: %d%d%d", c,b,a);
//       }
// }

/*if (a<b && a<c && b<c)
    
  */

 #include <stdio.h>

int main() {
  // Declarar variables
  int numeroOriginal, cifra1, cifra2, cifra3, numeroOrdenado;

  // Solicitar y leer el número original
  printf("Ingrese un número entero de tres cifras: ");
  scanf("%d", &numeroOriginal);

  // Extraer las cifras individuales
  cifra1 = numeroOriginal / 100;
  cifra2 = (numeroOriginal % 100) / 10;
  cifra3 = numeroOriginal % 10;

  // Ordenar las cifras de mayor a menor
  if (cifra1 > cifra2) {
    if (cifra1 > cifra3) {
      numeroOrdenado = cifra1 * 100 + cifra2 * 10 + cifra3;
    } else {
      numeroOrdenado = cifra1 * 100 + cifra3 * 10 + cifra2;
    }
  } else if (cifra2 > cifra3) {
    numeroOrdenado = cifra2 * 100 + cifra1 * 10 + cifra3;
  } else {
    numeroOrdenado = cifra3 * 100 + cifra1 * 10 + cifra2;
  }

  // Mostrar los resultados
  printf("El número original es: %d\n", numeroOriginal);
  printf("El número con las cifras ordenadas de mayor a menor es: %d\n", numeroOrdenado);

  return 0;
}
