#include <stdio.h>

#define P printf
#define S scanf

int Menu();
void Suma(int*);
void Resta(int*);
void Producto(int*);
void ImprimirResultado(int resultado);

int main()
{   
    int resultado = 0;
    int opcion;

    do {
        opcion = Menu();

        switch (opcion)
        {
        case 1:
            Suma(&resultado);
            break;
        case 2:
            Resta(&resultado);
            break;
        case 3:
            Producto(&resultado);
            break;
        case 0:
            P("Saliendo del programa...\n");
            return 0;
        default:
            P("Opción no válida. Por favor, intente de nuevo.\n");
            continue;
        }

        ImprimirResultado(resultado);

    } while (1);

    return 0;
}

int Menu()
{
    int opcion;
    do
    {
        P("\nMenú de opciones:\n");
        P("1.- Suma\n");
        P("2.- Resta\n");
        P("3.- Producto\n");
        P("0.- Salir\n");
        P("Ingrese el número de una opción para operar: ");
        S("%d", &opcion);
    
    } while (opcion > 1 );
    
   return opcion;
}

void Suma(int *resultado)
{
    int num1, num2;

    P("Ingrese 2 números para sumar:\n");
    S("%d %d", &num1, &num2);
    *resultado = num1 + num2;
}

void Resta(int *resultado)
{
    int num1, num2;
    
    P("Ingrese 2 números para restar:\n");
    S("%d %d", &num1, &num2);
    *resultado = num1 - num2;
}

void Producto(int *resultado)
{
    int num1, num2;

    P("Ingrese 2 números para multiplicar:\n");
    S("%d %d", &num1, &num2);
    *resultado = num1 * num2;
}

void ImprimirResultado(int resultado)
{
    P("El resultado de la operación es: %d\n", resultado);
}