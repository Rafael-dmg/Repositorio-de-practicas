// #include <stdio.h>

// int num1, num2;

// int suma (int num1, int num2);

// //falta el ingreso de los datos por teclado

// int main ()
// {
//     printf("ingrese dato 1\n");
//     scanf("%d", &num1);
//     printf("ingrese dato 2\n");
//     scanf("%d", &num1);

    
    

// }

//     int suma (int num1, int num2)
//     {
//         int resultado;
//         resultado=num1+num2;
//         return resultado;
//     }



#include <stdio.h>

// Declaración de variables globales
int num1, num2;

// Declaración de la función suma
int suma(int num1, int num2);

int main()
{
    printf("Ingrese dato 1\n");
    scanf("%d", &num1);
    printf("Ingrese dato 2\n");
    scanf("%d", &num2);  // Corregido para leer num2

    // Llamada a la función suma
    int resultado = suma(num1, num2);  // Aquí se llama a la función suma con los argumentos num1 y num2
    printf("La suma es: %d\n", resultado);

    return 0;
}

// Definición de la función suma
int suma(int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;
    return resultado;
}


//En el caso de la division lo mejor seria hacer la comprobacion dentro del switch, en lugar de en la funcion
float division (int num1, int num2)
{
    float resultado;

    if (num2 != 0)
        resultado = num1 / num2;
        else
            printf("no se puede dividir entre 0\n");

    return resultado;
}