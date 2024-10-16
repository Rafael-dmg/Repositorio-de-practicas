#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX_CHAR 80
#define _LONG 60

typedef struct{
    int cod;
    char nom[MAX_CHAR];
    int cat;
    int horas;
    float sue;
} registro_t;

void CargarDatos(registro_t reg[_LONG]);
void MostrarDatos(registro_t reg[_LONG]);

int main()
{
    registro_t reg[_LONG];

    CargarDatos(reg);

    return 0;
}

void CargarDatos(registro_t reg[_LONG])
{
    int i;

    for (int i = 0; i < _LONG; i++)
    {
        reg[i].cod = i+1;
        strcpy(reg[i].nom, "gonzalo");
        reg[i].cat = 1;
        reg[i].horas = 45;

    };
        
}

void MostrarDatos(registro_t reg[_LONG])
{
    for (int i = 0; i < _LONG; i++)
    {
        

    };
}