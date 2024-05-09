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
#define P printf;
#define S scanf;

#include <stdio.h>

int main() {
    int numero = 123;
    int cifraCentral;

    cifraCentral = (numero / 10) % 10; // El cálculo se ajustó para obtener la cifra central correcta

    printf("La cifra central de %d es %d\n", numero, cifraCentral);
    
    return 0; // Es recomendable retornar un valor
}

