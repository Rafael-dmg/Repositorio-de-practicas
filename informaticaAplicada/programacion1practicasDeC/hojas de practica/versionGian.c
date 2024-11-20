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
void mostrar(registro [], int);
void tecla();
void cargar(registro [], int *);
int validar(registro [], int , int);


int main()
{
    registro reg[max];
    int cont = 0;
    int opcion;

    do
    {
        //system("cls");
        printf("\n** MENU DE FACTURACION **\n");
        printf("< 1 >. Cargar\n");
        printf("< 2 >. Mostrar\n");
        printf("< 0 >. Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion)
        {
        case 1:
            cargar(reg, &cont);
           break;
        case 2:
            mostrar(reg, cont);
            tecla();
            break;
        case 0:
            printf("\n...Saliendo...\n");
            break;
        default:
            printf("Opcion invalida.\n");
        }
        tecla();
    } while (opcion != 0);
}

int validar(registro reg[], int cont, int codigo)
{
    int i;
    for (i = 0; i < cont; i++)
    {
        if (reg[i].cod_prof == codigo)
            return i;
    }
    return -1;
}

void cargar(registro reg[], int *cont)   
{   
    int cant_insp, horas, profPlace, codProf;

    printf("Ingrese el codigo del profesional: \n");
    printf("Si desea salir pulse '0'\n");
    scanf("%d", &codProf);

    while (codProf > 0)
    {
        p("Ingrese Nro. de Inspeccion: ");
        s("%d", &cant_insp);
        
        p("Ingrese Cantidad de horas: ");
        s("%d", &horas);
            
        profPlace = validar(reg, *cont, codProf);
        if(profPlace == -1) // Si es un nuevo profesional
        {  
            reg[*cont].cod_prof = codProf;
            reg[*cont].cant_insp = 1;               // Primera inspección
            reg[*cont].horas = horas;               // Horas de esta inspección
            reg[*cont].pago = horas * valorHora;    // Calcula el pago
            (*cont)++;                            // Incrementa el contador de profesionales
        } 
        else // Si el profesional ya existe
        {  
            p("Actualiza!\n");
            reg[profPlace].cant_insp++;                // Incrementa contador de inspecciones
            reg[profPlace].horas += horas;             // Suma las nuevas horas
            reg[profPlace].pago += (horas * valorHora);  // Suma el nuevo pago
                
        }   

        p("\nIngrese Codigo de Profesional (0 para terminar): ");
        s("%d", &codProf);

    }
}



void mostrar(registro reg[], int cont) //agregar contador de unidades
{
    int x;
    p("\n \t\t\tInforme de Inspecciones \n\n");
    p("\n Cod \t Profesional\t\t Visitas Horas\tSueldo\n\n\n");

    for (int x = 0; x < cont; x++)
    {
        p("\n %-10d%-20s %4d\t %4d \t%4d\n\n", reg[x].cod_prof, reg[x].nom_prof, reg[x].cant_insp, reg[x].horas, reg[x].pago);
    }

}


void tecla() {
    printf("\nPresione cualquier tecla para continuar !!!!\n");
    getch();
   system("cls");
}