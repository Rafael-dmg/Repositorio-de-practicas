#include <stdio.h>

#define P printf
#define S scanf

int Menu();
int Suma(int*);
int Resta(int*);
//int Producto(int*);

int main()
{   
    
    int resul, option;

    option = Menu();

    switch (option)
    {
    case 1:
        Suma(&resul);
        break;
    case 2:
        Resta(&resul);
        break;
    
    default:
        P("Estamos trabajando para traerle mas funcionalidades");
        break;
    }

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

    P("el resultado de la suma es: %d\n", *resul);

    return *resul;
}

int Resta(int *resul)
{
    int num1, num2;
    
    P("Ingrese 2 numeros para restar\n");

    S("%d", &num1);
    S("%d", &num2);
    *resul = num1 - num2;

    P("el resultado de la resta es: %d\n", *resul);

    return *resul;
}

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