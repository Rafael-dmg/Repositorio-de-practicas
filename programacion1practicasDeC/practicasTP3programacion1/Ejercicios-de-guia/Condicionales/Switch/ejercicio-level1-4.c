#include <stdio.h>
// #define P printf
// #define S scanf

int mes;

int main ()
{
printf("Ingrese un numero correspondiente a cada mes: \n");
scanf("%d", &mes);

if (mes < 1 || mes > 12)
    printf("Los meses van del 1 al 12 o vos que decis?\n");
else

switch(mes)
{
    case 12:
    case 1:
    case 2:
        printf("Verano\n");
        break;

    case 3:
    case 4:
    case 5:
        printf("Otoño\n");
        break;

    case 6:
    case 7:
    case 8:
        printf("Invierno\n");
        break;

    case 9:
    case 10:
    case 11:
        printf("Invierno\n");
        break;

        default:
            printf("Solo hay 12 meses y 4 estaciones en el año, chau\n");
}

}