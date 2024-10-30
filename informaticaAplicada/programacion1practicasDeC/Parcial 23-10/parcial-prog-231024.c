#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define p printf
#define s scanf

void linea(int);

int main()
{
        linea(50);
}

void linea(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("-"); // imprime el carácter c
    }
    printf("\n");
}