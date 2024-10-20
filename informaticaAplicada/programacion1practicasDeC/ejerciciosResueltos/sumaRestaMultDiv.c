#include <stdio.h>
int main()
{
    int n1, n2, suma, resta, multiplicacion, division;
    
    printf("Ingresa un numero\n");
    scanf("%d", &n1);
    printf("Ingresa un numero\n");
    scanf("%d", &n2);
    suma = n1 + n2;
    printf("Resultado:%d\n", suma);

    printf("Ingresa un numero\n");
    scanf("%d", &n1);
    printf("Ingresa un numero\n");
    scanf("%d", &n2);
    resta = n1 - n2;
    printf("Resultado:%d\n", resta);

    printf("Ingresa un numero\n");
    scanf("%d", &n1);
    printf("Ingresa un numero\n");
    scanf("%d", &n2);
    multiplicacion = n1 * n2;
    printf("Resultado:%d\n", multiplicacion);
    printf("Ingresa un numero\n");
    scanf("%d", &n1);
    printf("Ingresa un numero\n");
    scanf("%d", &n2);
    division = n1 / n2;
    printf("Resultado:%d\n", division);
    return 0;
}