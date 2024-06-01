/* En una sala de juegos existen 4 salas: Consolas, Juegos2D, Juegos 3D y VR. 
Si un usuario paga 4 creditos o mas puede acceder a todas, si paga solo 3 podra acceder a las tres 
primeras. Si paga 2 podra acceder a las 2 primeras y si paga 1 solo a la primera sala. Ingresar por teclado
los creditos y mostrar a que juegos puede acceder. */

#include <stdio.h>

int creditos;
char irOquedarse;

int main ()
{
    printf("Cuantos creditos quiere comprar?\n");
    printf("1 Credito para Consolas\n");
    printf("2 Creditos para Consolas + Juegos 2D\n");
    printf("3 Creditos para Consolas + Juegos 2D + Juegos 3D\n");
    printf("4 Creditos para Consolas + Juegos 2D + Juegos 3D + Realidad Virtual\n");
    printf("Cuantos Creditos vas a comprar hoy?:  ");
    scanf("%d", &creditos);

    if (creditos == 0)
    {
        printf("Estas seguro? tenemos buenos juegos\n");
        printf("Ingresa Y para elegir jugar o N para elegir aburrirte: \n");
        scanf(" %c", &irOquedarse);

        if (irOquedarse == 'y')
            printf("Veo que eres una persona divertida\n");
        else if (irOquedarse == 'n')
            printf("Sera para la proxima, adios\n");
    }

         printf("Cuantos Creditos vas a comprar hoy?:  ");
        scanf("%d", &creditos);

     if (creditos < 1){
        printf("Ingresa un valor correcto de creditos\n");    
    }
        switch (creditos)
        {
            case 1: 
                printf("Excelente! puedes acceder a la sala: Consolas!\n");
                break;

            case 2:
                printf("Excelente! puedes acceder a las salas: Consolas, Juegos 2D!\n");
                break;

            case 3:
                printf("Excelente! puedes acceder a las salas: Consolas, Juegos 2D y Juegos 3D!\n");
                break;

            case 4:
                printf("Excelente! puedes acceder a la experiencia completa de Consolas, Juegos 2D, Juegos 3D y Realidad virtual!\n");
                break;

                default: 
                    printf("Excelente! puedes acceder a la experiencia completa de Consolas, Juegos 2D, Juegos 3D y Realidad virtual!\n");
                
        }

        return 0;
    }    

