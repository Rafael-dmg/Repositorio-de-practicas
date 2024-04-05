// #include <stdio.h>

// int main (){
//    int num1, num2, suma;
//    printf("Ingrese un numero: ");
//    scanf("%d",&num1);
//    printf("Ingrese otro numero: ");
//    scanf("%d",&num2);
//    suma=num1+num2;
//    printf("la suma es: " "%d",suma);
//    return 0;
// }

#include <stdio.h>
#define P printf
#define S scanf

int main () {
    int lado, cuadrado;
    P ("ingresa el lado: ");
    S ("%d",&lado);
    cuadrado=lado*lado;
    printf("El area del cuadrado es: " "%d",cuadrado);
    return 0;
}