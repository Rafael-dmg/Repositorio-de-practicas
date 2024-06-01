#include <stdio.h>

int main ()
{
    int eleccionCliente;

    printf("Ingrese un valor para operar\n");
    printf("Ingrese 1 para Comidas\n2 para Bebidas\no 3 para Merchandising\n");
    scanf("%d", &eleccionCliente);

    if (eleccionCliente == 1)
            printf("gracias por elegir nuestra comida, buen provecho\n");
        else if (eleccionCliente == 2)
            printf("gracias por elegir nuestras bebidas, elige como refrescarte\n");
        else if (eleccionCliente == 3)
            printf("como quieres que te acompanemos?\n");
        else
            printf("Ingrese un valor valido para continuar\n");
    
}
