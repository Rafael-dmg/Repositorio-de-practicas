// #include <stdio.h>
// #define p printf
// #define s scanf

// int main(void)
// {
//     int *vec;    // Dinámico
//     int cant;
//     unsigned long int tam;


//     p("\nIngrese cantidad: ");
//     s("%d", &cant);

//     for(int i=0; i<cant; i++)
//         vec[i] = i+3;

//     for(int i=0; i<cant; i++)
//         p("%d ",vec[i]);

//     tam=sizeof(vec);

//     p("\nLa longitud es: %d", tam);



//     return 0;
// }

#include <stdio.h>
#include<time.h>
#define p printf
#define s scanf

int main(void)
{
    int *vec;    // Dinámico
    int cant, i;

    srand(time(NULL));

    p("\nIngrese cantidad: ");
    s("%d", &cant);
    //cant=5;
    vec = (int *)malloc(cant*sizeof(int));

    for(i=0; i<cant; i++)
        vec[i] = rand()%(9)+1;

    for(i=0; i<cant; i++)
        p("%d ",vec[i]);

    free(vec);

    return 0;
}