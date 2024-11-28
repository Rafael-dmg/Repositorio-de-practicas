#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Art 6         
#define Cli 5          
#define p printf
#define s scanf 
#define max 100
#define valorHora 1200
int opcion;

typedef struct
{
    int cod_prof;
    char nom_prof[30];
    int cant_insp; 
    int horas; 
    int pago; 
} registro;


void mostrar(registro [], int);
void tecla();
void cargar(registro [], int *);
int validar(registro [], int , int);

int main()
{
    system("cls");
    registro tecList[max];
    int cont = 0, opcion;
    do
    {
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
            tecla();
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

int validar(registro tecList[], int cont, int codigo)
{
    int i;
    for (i = 0; i < cont; i++)
    {
        if(tecList[i].cod_prof == codigo)
            return 1;
    }
    return -1;
}

void cargar(registro tecList[], int *cont)
{
    int cant_insp, horas, profPlace, codigo;

    p("Ingrese el codigo del profesional\n");
    p("Si desea salir pulse '0'\n");
    p("__:");
    s("%d", &codigo);

    while (codigo != 0)
    {
            p("Ingrese el numero de inspecciones relizadas: ");
            s("%d", &cant_insp);       

            p("Ingrese cantidad de horas: ");
            s("%d", &horas);  

        profPlace = validar(tecList, *cont, codigo);
        
        if(profPlace == -1) 
        {  
            tecList[*cont].cod_prof = codigo;
            tecList[*cont].cant_insp = 1;
            tecList[*cont].pago = horas * valorHora;    
            p("Ingrese Nombre del Profesional: ");
            fflush(stdin);  
            gets(tecList[*cont].nom_prof);
            (*cont)++;                            
        } 
        else 
        {  
            p("Actualiza!\n");
            tecList[profPlace].cant_insp++;                
            tecList[profPlace].horas += horas;             
            tecList[profPlace].pago += (horas * valorHora);  
        }   


        p("\nDesea cargar otro profesional?\n ");
        p("Cargue el codigo del profesional para continuar o Ingrese 0 para salir:\n");
        s("%d", &codigo);
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