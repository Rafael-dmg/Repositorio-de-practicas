#include <stdio.h>

#define P printf
#define S scanf

int Menu();
int Suma(int*);
int Resta(int*);
int Producto(int*);
int Dividir(int*);
void ImprimirResultado(int resulTotal);

int main()
{   
    
    int resul = 0, option;

    do
    {
        option = Menu();


        switch (option)
        {
        case 1:
            Suma(&resul);
            break;
        case 2:
            Resta(&resul);
            break;
        case 3:
            Producto(&resul);
            break;

        case 4:
            Dividir(&resul);
            break;
        
        case 0:
            P("Saliendo del programa...");
            return 0;
        
        default:
            P("Estamos trabajando para traerle mas funcionalidades");
            break;
        }

     ImprimirResultado(resul);

    } while (1);
    
    return 0;
}


int Menu()
{
    int option;
    do
    {
         P("Ingrese el numero de una opcion para operar\n");
    P("1.- Suma\n");
    P("2.- Resta\n");
    P("3.- Producto\n");
    P("4.- Dividir\n");

    P("0.- Salir\n");

    S("%d", &option);
    
    } while (option < 0);
    
   return option;
}

int Suma(int *resul)
{
    int num1, num2;

    P("Ingrese 2 numeros para sumar\n");

    S("%d", &num1);
    S("%d", &num2);
    *resul = num1 + num2;

    //P("el resultado de la suma es: %d\n", *resul);

    return *resul;
}

int Resta(int *resul)
{
    int num1, num2;
    
    P("Ingrese 2 numeros para restar\n");

    S("%d", &num1);
    S("%d", &num2);
    *resul = num1 - num2;

    //P("el resultado de la resta es: %d\n", *resul);

    return *resul;
}

int Producto(int *resul)
{
     int num1, num2;

    P("Ingrese 2 numeros para multiplicar\n");

    S("%d", &num1);
    S("%d", &num2);
    *resul = num1 * num2;

    //P("el resultado de la multiplicacion es: %d\n", *resul);

    return *resul;
}

int Dividir(int *resul)
{
    int num1, num2;

    P("Ingrese 2 numeros para dividir\n");

    S("%d", &num1);
    S("%d", &num2);

    if(num2 > 0)
    {
        *resul = num1 / num2;
    
    } else
        *resul = -1;

    return *resul;
}

 void ImprimirResultado(int resul)
 {
    if(resul<0)
    {
        P("Error de sintaxis\n ");
    } else
        P("El resultado de la operacion es: %d\n", resul);
 }


 

//-------------------------------------------------------------------------------------------------------
// #include <stdio.h>

// struct ResultadoOperacion {
//     int valor;
//     int codigo_error;
// };

// struct ResultadoOperacion Dividir(int a, int b) {
//     struct ResultadoOperacion resultado;
//     if (b != 0) {
//         resultado.valor = a / b;
//         resultado.codigo_error = 0;
//     } else {
//         resultado.valor = 0;
//         resultado.codigo_error = 1;  // Código de error para división por cero
//     }
//     return resultado;
// }

// int main() {
//     struct ResultadoOperacion res = Dividir(10, 10);
//     if (res.codigo_error == 0) {
//         printf("El resultado es: %d\n", res.valor);
//     } else {
//         printf("Error: División por cero\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// #define P printf
// #define S scanf

// int Menu();
// void Suma(int*);
// void Resta(int*);
// void Producto(int*);
// void ImprimirResultado(int resultado);

// int main()
// {   
//     int resultado = 0;
//     int opcion;

//     do {
//         opcion = Menu();

//         switch (opcion)
//         {
//         case 1:
//             Suma(&resultado);
//             break;
//         case 2:
//             Resta(&resultado);
//             break;
//         case 3:
//             Producto(&resultado);
//             break;
//         case 0:
//             P("Saliendo del programa...\n");
//             return 0;
//         default:
//             P("Opción no válida. Por favor, intente de nuevo.\n");
//             continue;
//         }

//         ImprimirResultado(resultado);

//     } while (1);

//     return 0;
// }

// int Menu()
// {
//     int opcion;
//     do
//     {
//         P("\nMenú de opciones:\n");
//         P("1.- Suma\n");
//         P("2.- Resta\n");
//         P("3.- Producto\n");
//         P("0.- Salir\n");
//         P("Ingrese el número de una opción para operar: ");
//         S("%d", &opcion);
    
//     } while (opcion > 1 );
    
//    return opcion;
// }

// void Suma(int *resultado)
// {
//     int num1, num2;

//     P("Ingrese 2 números para sumar:\n");
//     S("%d %d", &num1, &num2);
//     *resultado = num1 + num2;
// }

// void Resta(int *resultado)
// {
//     int num1, num2;
    
//     P("Ingrese 2 números para restar:\n");
//     S("%d %d", &num1, &num2);
//     *resultado = num1 - num2;
// }

// void Producto(int *resultado)
// {
//     int num1, num2;

//     P("Ingrese 2 números para multiplicar:\n");
//     S("%d %d", &num1, &num2);
//     *resultado = num1 * num2;
// }

// void ImprimirResultado(int resultado)
// {
//     P("El resultado de la operación es: %d\n", resultado);
// }