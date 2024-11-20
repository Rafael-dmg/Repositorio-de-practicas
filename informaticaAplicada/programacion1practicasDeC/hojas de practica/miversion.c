#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Art 6           // maxima cantidad de Articulos
#define Cli 5           // maxima cantidad de clientes
#define p printf
#define s scanf // 1200$ por HORA
#define max 100
#define valorHora 1200
int opcion;

typedef struct
{
    int cod_prof; // codigo de profesional
    char nom_prof[30]; // nombre del Profesional
    int cant_insp; // cantidad de inspecciones
    int horas; // horas realizadas por inspeccion
    int pago; // pago acumulado
} registro;


// prototipos definidos para que desarrollen
//void mostrar(registro [], int);
void tecla();
void cargar(registro [], int *);
int validar(registro [], int , int);

int main()
{
    system("cls");
    registro tecList[max];
    int cont = 0, opcion; // flag,

    do
    {
        system("cls");
        p("\n=== MENU DE OPCIONES ===\n");
        p("1. Registrar inspecciones\n");
        p("2. Mostrar informe de inspecciones\n");
        p("0. Salir\n");
        p("Ingrese su opcion: ");
        s("%d", &opcion);
        
        switch (opcion)
        {
        case 1:
            cargar(tecList, &cont);
            break;
        case 2:
            mostrar(tecList, cont);
            break;
        case 0:
            p("\nGracias por usar nuestro software!\n");
            break;
        default:
            p("\n opcion invalida");
            tecla();
        }
    } while (opcion != 0);
}

int validar(registro tecList[], int cont, int codProf)
{
    int i;
    for (i = 0; i < cont; i++)
    {
        if(tecList[i].cod_prof == cont)
            return 1;
    }
    return -1;
}

void cargar(registro tecList[], int *cont)
{
    int codigo;

    p("Ingrese el codigo del profesional\n");
    p("Si desea salir pulse '0'\n");
    p("__:");
    s("%d", &codigo);

    while (codigo != 0)
    {
        tecList[*cont].cod_prof = codigo;

        
    }
    


}

void mostrar(registro tecList[], int cont)
{
    p("\n \t\t\tInforme de Inspecciones \n\n");
    p("\n Cod \t Profesional\t\t Visitas Horas\tSueldo\n\n\n");
	int x;
    for (int x = 0; x < cont; x++)
    {
        p("\n %-10d%-20s %4d\t %4d \t%4d\n\n", tecList[x].cod_prof, tecList[x].nom_prof, tecList[x].cant_insp, tecList[x].horas, tecList[x].pago);
    }
}

void tecla()
{
    p("\n Presione cualquier tecla para continuar");
    getch();
    system("cls");
}