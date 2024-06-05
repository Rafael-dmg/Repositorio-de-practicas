/*Un comerciante hace descuentos a sus clientes de la siguiente forma: Si ha comprado menos de $10000 no hay descuento. 
Si la compra está entre $10000 y $30000 le descuenta un 5%. 
Si la compra está por encima de $30000 hasta $50000 le descuenta un 10%. 
Si la compra supera los $50000 le descuenta un 15%.*/

#include <stdio.h>
#define P printf
#define S scanf

int main ()
{
  float compra, total,descuento;

  do
  {
    P("Total de compra\n");
    S("%f", &compra);
    
    if(compra > 10000 && compra < 30000)
    {
     descuento = compra * 0.05;
     total = compra - descuento; 
      P("Su total de compra es: %.2f\n", compra);
      P("Su descuento: %.2f\n", descuento);
      P("Su total menos el descuento es: %.2f\n", total);
    } 
    else if (compra > 30000 && compra < 50000)
    {
      descuento = compra * 0.10;
      total = compra - descuento;
      P("Su total de compra es: %.2f\n", compra);
      P("Su descuento: %.2f\n", descuento);
      P("Su total menos el descuento es: %.2f\n", total);
    } else if (compra > 50000)
    {
      descuento = compra * 0.15;
      total = compra - descuento;
      P("Su total de compra es: %.2f\n", compra);
      P("Su descuento: %.2f\n", descuento);
      P("Su total menos el descuento es: %.2f\n", total);
    } else
    {
      P("No se aplicaron descuentos\n");
      P("Su total de compra es: %.2f\n", compra);
    }
     
  } while (compra <= 0);

  
  
}