#include <stdio.h>
// #define p printf;
// #define s scanf;

int main(void)
{
    unsigned int num, acumulador;

    printf("ingrese un numero natural\n");
    scanf("%d", &num);
    acumulador =0;

    // while (contador <= num) /*aca el ontador arranca en cero asi que hasta que contador no llegue al num que ingreso el 
    // usuario, se cumplira codigo debajo*/
    // {
    //     acumulador += contador;
    //     contador++;
    // }
    // printf("La suma es: %d\n", acumulador);

    for (unsigned int contador = 1; contador<=num; contador++)

       acumulador *= contador;
        
     printf("La suma es: %d\n", acumulador);
    
    //En este caso conviene for porque sabemos la cantidad de iteracion (las da el usuario)

    return 0;
}
