// #include <stdio.h>

// float valorFinal, basico;
// char tipo, destino = 300;

// int main ()
// {
//     basico = 300;

//     printf("Ingrese el tipo de envio: ");
//     scanf("%c", &tipo[2]);

//     switch (tipo[2])
//     {
//         case 's' || 'S': 
//             printf("Ingrese destino");
//             scanf("%c", &destino);
//                 if(destino == 'l' || destino == 'L'){
//                     valorFinal = basico + (basico * 0.05);
//                     printf("El costo es: %.2f", valorFinal);
//                 } else {
//                     valorFinal=basico + (basico * 0.20);
//                     printf("el costo es: %.2f", valorFinal);
//                 }
                    
//     }
// }

#include <stdio.h>

int main() {
  // Declaración de variables
  char tipoEncomienda, destinoEncomienda;
  float costoBase = 300.00, recargoTipo, recargoDestino, costoTotal;

  // Solicitar tipo de encomienda
  printf("Ingrese el tipo de encomienda (S/X/E): ");
  scanf(" %c", &tipoEncomienda);

  // Validar tipo de encomienda ingresado
  if (tipoEncomienda == 'S' || tipoEncomienda == 'X' || tipoEncomienda == 'E') {
    printf("Tipo de encomienda no válido. Ingrese S, X o E.\n");
    return 1; // Indicar error
  }

  // Solicitar destino de la encomienda
  printf("Ingrese el destino de la encomienda (L/N): ");
  scanf(" %c", &destinoEncomienda);

  // Validar destino de encomienda ingresado
  if (destinoEncomienda == 'L' || destinoEncomienda == 'N') {
    printf("Destino de encomienda no válido. Ingrese L o N.\n");
    return 1; // Indicar error
  }

  // Calcular recargo por tipo de encomienda
  switch (tipoEncomienda) {
    case 'S':
      recargoTipo = 0.00;
      break;
    case 'X':
      recargoTipo = 0.20;
      break;
    case 'E':
      recargoTipo = 0.40;
      break;
  }

  // Calcular recargo por destino de encomienda
  switch (destinoEncomienda) {
    case 'L':
      recargoDestino = 0.05;
      break;
    case 'N':
      recargoDestino = 0.20;
      break;
  }

  // Calcular costo total
  costoTotal = costoBase + (costoBase * recargoTipo) + (costoBase * recargoDestino);

  // Mostrar el costo total
  printf("El costo total de la encomienda es: $%.2f\n", costoTotal);

  return 0;
}
