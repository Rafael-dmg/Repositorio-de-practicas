#include <stdio.h>
int main()
{
    int num = 0, suma = 0;
    do
    {
        suma = suma + num;
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    } while (num >= 0);
    printf("suma es: %d", suma);
    return 0;
}