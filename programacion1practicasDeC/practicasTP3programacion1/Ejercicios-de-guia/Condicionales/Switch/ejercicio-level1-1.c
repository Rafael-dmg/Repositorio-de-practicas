#include <stdio.h>

int eleccion, cuadrado, rectangulo, circulo;
float lado, perimetro, base, altura, area, radio;

int main ()
{
    printf("Ingrese un numero para elegir la forma geometrica\n");
    printf("1.- Cuadrado\n");
    printf("2.- Rectangulo\n");
    printf("3.- Circulo\n");
    scanf("%d", &eleccion);

    if (eleccion < 1 || eleccion > 3)
        printf("Elija un numero dentro del rango\n");

    switch(eleccion) 
    {
        case 1:
           printf("Elegiste cuadrado\n");
            printf("Ingresa el lado de un cuadrado para saber su area y su perimetro\n");
            scanf("%f", &lado);

            if (lado > 0) {
                area = lado * lado;
                perimetro = area *2;
                printf("Area: %.1f\n", area);
                printf("Perimetro: %.1f\n", perimetro);
            }   
                else
                    printf("Ingrese un numero mayor a 0\n");
        break;

        case 2:
            printf("Elegiste rectangulo\n");
            printf("Ingresar los valores para calcular area y perimetro\n");
            printf("Ingrese la base del rectangulo: \n");
            scanf("%f", &base);
            printf("Ingrese la altura del rectangulo: \n");
            scanf("%f", &altura);

            area = base * altura;
            perimetro = 2 * (base + altura);
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            break;

        case 3:
            printf("Elegiste circulo\n");
            printf("Ingresar los valores para calcular area y perimetro\n");
            printf("Ingrese el radio del circulo\n");
            scanf("%f", &radio);

            area = 3.14 * (radio * radio);
            perimetro = (3.14 * 2) * radio;
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            break;
    }
}