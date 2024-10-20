#include <stdio.h>
#include <string.h>

int main()
{

    int contador = 0;
    do
    {
        contador++;
    } while (contador < 3);
    {
        printf("Tus numeros son: %d", contador);
    }

    return 0;
}