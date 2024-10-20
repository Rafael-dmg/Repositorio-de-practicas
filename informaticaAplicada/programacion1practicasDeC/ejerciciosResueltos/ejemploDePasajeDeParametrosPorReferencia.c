#include <stdio.h>

int main()
{
    int n1, n2, resultado;
    printf("Ingresa el primer numero\n");
    scanf("%d", &n1);
    printf("Ingresa el segundo numero\n");
    scanf("%d", &n2);
    resultado = n1 - n2;
    printf("El resultado es:%d", resultado);
    return 0;
}