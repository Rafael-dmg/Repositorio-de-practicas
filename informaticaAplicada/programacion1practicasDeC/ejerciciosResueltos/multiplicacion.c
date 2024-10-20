#include <stdio.h>
#include <string.h>


void compara(char a[], char b[])
{
    int i = strcmp(a, b);
    if (!i)
        printf("Iguales\n"); /* falso <-> i=0 */
    else if (i < 0)
        printf("%s > %s\n", a, b);
    else
        printf("%s < %s\n", a, b);
}
void concatena(char a[], char b[])
{
    if (strlen(a) + strlen(b) < 80)
    {
        strcat(a, b);
        printf("%s", a);
    }
}
void copia(char a[], char b[])
{
    strcpy(a, b);
    printf("%s y %s\n", a, b);
}
void longitud(char a[], char b[])
{
    printf("%s = longitud %d: %s = longitud %d\n", a, strlen(a), b, strlen(b));
}
int main()
{
    char x[80], y[80]; /* vectores */
    printf("Introduce la primera cadena de caracteres\n");
    scanf("%s", x);
    printf("Introduce la segunda cadena de caracteres\n");
    scanf("%s", y);
    longitud(x, y);
    compara(x, y);
    concatena(x, y);
    copia(x, y);
}