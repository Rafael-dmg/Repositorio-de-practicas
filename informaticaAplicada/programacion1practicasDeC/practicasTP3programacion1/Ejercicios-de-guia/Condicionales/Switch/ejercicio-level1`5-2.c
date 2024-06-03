/*Un comerciante hace descuentos a sus clientes de la siguiente forma: Si ha comprado menos de $10000 no hay descuento. 
Si la compra está entre $10000 y $30000 le descuenta un 5%. 
Si la compra está por encima de $30000 hasta $50000 le descuenta un 10%. 
Si la compra supera los $50000 le descuenta un 15%.*/

#include <stdio.h>
#define P printf
#define S scanf

int main ()
{
  float compra, total;
  int descuento;

  do
  {
    P("Total de compra\n");
    S("%f", &compra);

    if(compra > 10000)
    {
     

    } 
    else
    P("no se aplican descuentos\n");

  } while (compra <= 0);
  
}