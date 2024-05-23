#include<stdio.h>
#define p printf
#define s scanf

int num;

// Prototipos:
int menu(void);
void cargarDato(int*);
void factorial (int, int*);

int main()
{
    unsigned int num, fact;
    cargarDato(&num);
    factorial(num, &fact);

    p("\nEl factorial de %d es %d\n", num, fact);

    return 0;
}

void cargarDato(int* numero)
{
    p("\nIngrese un numero: ");
    s("%d", numero);
}

void factorial (int num, int*fact)
{
   int aux = 1;

    for(int i=1;i<=num;i++)
        aux*=i;
    *fact = aux;
}