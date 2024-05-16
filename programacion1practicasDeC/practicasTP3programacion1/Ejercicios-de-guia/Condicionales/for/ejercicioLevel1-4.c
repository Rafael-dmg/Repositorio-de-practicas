#include <stdio.h>

int n, valor, base;

int main()
{
    base =1;

    printf("Ingrese un numero");
    scanf("%d", &n);

    for ( valor = 0; valor <= n; valor++)
    {
        base += valor;
        base = base*n;
    }
        printf("%d\n", base);
}