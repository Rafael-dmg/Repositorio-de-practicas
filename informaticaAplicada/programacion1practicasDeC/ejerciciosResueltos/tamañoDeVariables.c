#include <stdio.h>

int main()
{
    char c;
    int n, d;
    n = sizeof(c);
    printf("El numero de bytes de la variable c es %d\n", n);
    n = sizeof(d);
    printf("El numero de bytes de la variable d es %d\n", n);
    n = sizeof(int);
    printf("El numero de bytes que ocupa el tipo entero es %d\n", n);
    printf("El numero de bytes que ocupa el tipo double es %d\n", sizeof(double));
    return 0;
}