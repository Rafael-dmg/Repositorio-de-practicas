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

void menu()
{
    do
    {
        system("cls");
        printf("\n*** MENU DE FACTURACION ***\n");
        printf("< 1 >. Facturar productos\n");
        printf("< 2 >. Mostrar clientes\n");
        printf("< 3 >. Mostrar articulos\n");
        printf("< 4 >. Mostrar facturas\n");
        printf("< 0 >. Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion)
        {
        case 1:
            p("tu opcion fue la %d", opcion);
            break;
        case 2:
            p("tu opcion fue la %d", opcion);
            break;
        case 3:
            p("tu opcion fue la %d", opcion);
            break;
        case 4:
            p("tu opcion fue la %d", opcion);
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

void cargar()
{

}


void mostrar()
{
    
}

/*
Requerimientos:
1er paso:
El numero de inspeccion se inicie solo
El codigo del profesional - se necesita crear una lista de profesionales



Verificaciones:
si el profesional ya esta registrado: actualizar
si no esta registrado: registralo de cero
ingresar tantas inspecciones como se quiera(hasta 100)
si el usuario ingresa el numero 0 sale del programa
*/