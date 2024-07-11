// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <string.h>
// #include <ctype.h>
// #include <math.h>
// #define N 10
// void CargarVector(int [N]);
// void mostrarVector(int [N],char *);
// void ordenarVector(int [N], int);
// int main()
// {
//     int vec[N]; // definir o declarar un vector
//     CargarVector(vec);
//     mostrarVector(vec, "Vector Cargado SIN ordenar");
//     ordenarVector(vec,N);
//     mostrarVector(vec, "Vector ORDENADO");
//     return 0;
// }
// void CargarVector(int v[N])
// {
//     int i=0;
//     do
//     {
//         printf("\n Ingrese un dato <%2d> de <%2d>:",i+1,N);
//         scanf("%d",&v[i]);
//         i++;
//     } while (i<N);
    
// }
// void mostrarVector(int x[N], char *tit)
// {
//     int i;
//     printf("\n%s\n",tit);
//     for(i=0;i<N;i++)
//     {
//         printf("%3d\n",x[i]);
//     }
// }
// void ordenarVector(int x[], int y)
// {
//     // y posse laa cantidad de valores a Ordenar
//     int i, cota = y - 1, k = 1, aux; // k es una bandera, que me indica que se termino de ordenar
//     while (k)
//     {
//         k = 0; // partimos del supuesto que esta ordenado
//         for (i = 0; i < cota; i++)
//         {
//             if (x[i] > x[i + 1])
//             {
//                 // aqui se produce el swap
//                 aux = x[i];
//                 x[i] = x[i + 1];
//                 x[i + 1] = aux;
//                 k = i; // aqui k toma el valor donde fue ordenado por ultima vez
//             }
//         }
//         cota = k; // aqui se lo pasa a cota, con lo cual lo limita en las iteracioners
//     }
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 10
char Nombres[N][30]; //los primeros corchetes serian las 'filas' y el segundo corchete serian las 'filas'

void CargarVector(char[][30]);
void OrdenarAscendente(char[][30], int);
void OrdenarDescendente(char[][30], int);
void MostrarVector(char[][30], char *);

int main()
{
  char nombre[25];
  
  CargarVector(nombre);
  MostrarVector(nombre, "mensajito jo jo");
}
char nombre[25];

void CargarVector(char nombre[][30])
{
  int i=0;
    do
    {
        printf("\n Ingrese un dato <%2d> de <%2d>:",i+1,N);
        scanf("%s",&nombre[i]);
        i++;
    } while (i<N);
  
}

void MostrarVector(char nombre[][30], char *msj)
{
  int i;

  for (i = 0; i < N; i++)
  {
    printf("\n%s\n", nombre[i]);
  }
  
}