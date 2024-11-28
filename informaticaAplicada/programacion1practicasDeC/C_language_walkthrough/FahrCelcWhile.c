#include <stdio.h>
#include <time.h>
#define p printf

void CelsiusFahrenheit();
void FahrenheitCelsius();
void tecla();

int main()
{
    int opcion;

    do
    {
        system("cls");
        printf("\n*** MENU DE temperaturas ***\n");
        printf("< 1 >. Fahrenheit a Celsius\n");
        printf("< 2 >. Celsius a Fahrenheit\n");
        printf("< 0 >. Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            FahrenheitCelsius();
            break;
        case 2:
             CelsiusFahrenheit();
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

void FahrenheitCelsius()
{
        int upper = 300;
    int lower = 0;
    int middle = 20;
    float fahr = lower, celsius;

    p("\n\t====Valores de Fahrenheit====\n");
    
    while (fahr <= upper)
    {   
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("\t\t%3.0f %6.1f\n", fahr, celsius);
        
        fahr += middle;
        //  for (int i = -1; i < lower;i++)
        // {
        //     p("\n");
        // }
    }
}

void CelsiusFahrenheit()
{
    int upper = 300;
    int lower = 0;
    int middle = 20;

    float fahr, celsius = lower;

    p("\n\t====Valores de Celsius====\n");
    while (celsius <= upper)
    {   
        fahr = (celsius * 9.0/5.0)+32.0;
        printf("\t\t%3.1f \t%3.1f\n", celsius, fahr);
        celsius += middle;
    }
}

void tecla(void)
{
    printf("\n\n...PRESIONE CUALQUIER TECLA PARA CONTINUAR...\n");
    getch();
}

//crear2 funciones una de generacion random de valor para fahrenheit y otra 
//para que el valor de celsius se calcule automaticamente segun el valor de fahr