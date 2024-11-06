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
void menu(void);
//void mostrar(registro[max], int);
void tecla(void);
//void cargar(registro[max], int *);
//int verificar();


int main()
{
    menu();
    tecla();

    //cargar(registro, cont);
    //mostrar(registro, *);
}

//les dejo la función tecla
void tecla(void)
{
p("\nPresione cualquier tecla para continuar !!!!\n");
getch();
system("cls");
}