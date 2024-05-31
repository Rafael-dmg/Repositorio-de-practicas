/*15. Construye un programa que dados el valor de 1 kg de determinada mercadería 
y la cantidad de mercadería comprada, emite el valor del total a pagar. */

#include <stdio.h>

int main(void) 
{
  float precioMercaderia, total, kilos;

  printf("Precio de mercaderia: \n");
  scanf("%f", &precioMercaderia);
  printf("Cantidad: \n");
  scanf("%f", &kilos);

  total = precioMercaderia * kilos;

  printf("el total de la mercaderia es de: %f", total);

}