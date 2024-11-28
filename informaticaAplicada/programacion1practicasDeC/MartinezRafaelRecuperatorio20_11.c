#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define p printf
#define s scanf 
#define max 5
#define valorHora 7000
int opcion;

typedef struct
{
int cod_chofer; // código del chofer
char nom_chofer[30]; // nombre del chofer
int cant_viajes; // cantidad de viajes realizados
int horas; // horas trabajadas( horas de los viajes)
int pago_viajes; // pago_viajes acumulado por los viajes realizados con los escolares
} chofer;

void mostrar(chofer[], int);
void tecla();
void cargar(chofer[], int *);
int validar(chofer[], int , int);
void mostrarContador();
void BuscarChofer(chofer[], int);

int main()
{
    system("cls");
    chofer t[max];
    int cont = 0, opcion, j;
    do
    {
        p("\n=== MENU DE OPCIONES ===\n");
        p("1. Registrar viajes\n");
        p("2. Mostrar informe de viajes\n");
        p("3. Buscar Chofer por codigo\n");
        p("4. Mostrar valor del contador\n");
        p("5. Ordenar los choferes por orden cantidad de viajes\n");
        p("0. Salir\n");
        p("Ingrese su opcion: ");
        s("%d", &opcion);
        
        switch (opcion)
        {
        case 1:
            cargar(t, &cont);
            break;
        case 2:
            mostrar(t, cont);
            tecla();
            break;
         case 3:
            BuscarChofer(t, j);
            tecla();
            break;
        case 4:
            mostrarContador();
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

int validar(chofer t[], int cont, int cod)
{
    int i;
    for (i = 0; i < cont; i++)
    {
        if(t[i].cod_chofer == cod)
            return i;
    }
    return -1;
}

void cargar(chofer t[max], int *cont)
{
    int k, cant_viajes, horas, chofPlace, codChof;
    k = *cont;
    p("Ingrese el codigo del chofer\n");
    p("Si desea salir pulse '-1'\n");
    p("__:");
    s("%d", &codChof);

    while (codChof > -1)
    {
            p("Ingrese el numero de viajes relizados: ");
            s("%d", &cant_viajes);       

            p("Ingrese cantidad de horas: ");
            s("%d", &horas);  

        chofPlace = validar(t, k, codChof);
        p("%d", k);
        if(chofPlace == -1) 
        {  
            t[k].cod_chofer = codChof;
            t[k].cant_viajes = cant_viajes;
            t[k].horas = horas;
            t[k].pago_viajes = horas * valorHora;    
            p("Ingrese Nombre del chofer: ");
            fflush(stdin);  
            gets(t[k].nom_chofer);
            *cont += 1;
            p("contador vale = %d", *cont);
            k = *cont;                
        } 
        else 
        {  
            p("%d\n", chofPlace);
            p("\t Actualiza! \n");
            t[chofPlace].cant_viajes += cant_viajes;     
            p("%d\n", t[chofPlace].cant_viajes);          
            t[chofPlace].horas += horas;
            p("%d\n", t[chofPlace].horas);             
            t[chofPlace].pago_viajes += (horas * valorHora);
            p("%d\n", t[chofPlace].pago_viajes);  
        }   


        p("\nDesea cargar otro chofer?\n ");
        p("Cargue el codigo del chofer para continuar o Ingrese -1 para salir:\n");
        s("%d", &codChof);
    }
}   

void mostrar(chofer t[max], int i)
{
    p("\n \t\t\tInforme de Gestión de Choferes de Transporte Escolar\n\n");
    p("\n Cod \t Chofer\t\t Viajes \tHoras\tPago\n\n\n");
    int j = 0;
    while (j < i) // seria el tope máximo de Choferes escolares actual
    {
        p("\n %-10d%-20s %4d\t %4d\t\t%4d\n\n", t[j].cod_chofer, t[j]. nom_chofer, t[j].cant_viajes, t[j].horas, t[j].pago_viajes);
        j++;
    }
}

void tecla()
{
    p("\n Presione cualquier tecla para continuar");
    getch();
    system("cls");
}

void mostrarContador()
{
    int cont;

    p("%d", cont);
}

void BuscarChofer(chofer t[max], int j)
{
    p("\t--Ingrese el chofer que quiera imprimir--\n");
    s("%d", &j);
    p("Chofer:");

    p("\n %-10d%-20s %4d\t %4d\t\t%4d\n\n", t[j-1].cod_chofer, t[j-1]. nom_chofer, t[j-1].cant_viajes, t[j-1].horas, t[j-1].pago_viajes);
}

//Falto:
// verificacion de cantidad de choferes ingresados
// Ordenar con Bubble Sort segun el pago acumulado