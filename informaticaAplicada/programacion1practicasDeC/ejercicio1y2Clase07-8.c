#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 5

void CargarMatriz(int [N][N]);
void MostrarMatriz(int [N][N]);
int Mayor(int [N][N]);
void Encontrar(int [N][N]);

int main (void)
{

    int mat[N][N], mayor;
    srand(time (NULL));
    CargarMatriz(mat);
    MostrarMatriz(mat);
    mayor = Mayor(mat);
    Encontrar(mat);

    //printf("El mayor es: %d\n", mayor);
    return 0;
}

void CargarMatriz(int mat[N][N])
{
    int CS=30, Ci=1, i, j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            mat[i][j]=rand()%(CS - Ci + 1) + Ci;
        }
    }
}

void MostrarMatriz(int mat[N][N])
{
      int i, j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}

int Mayor (int mat[N][N]){
    int i, j, max;  //fil=0, col=0;
    max = mat[0][0];
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            if (mat[i][j]>max)
            {
                max = mat[i][j];
              //  fil = i;
             // col = j;
            }
        }
    }
    return max;
    //printf("El mayor es: %d y su posicion es %d,%d\n", max, fil, col);
}

void Encontrar(int mat[N][N])
{
 int i, j, mayor, fil=0, col=0, cont = 0;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            if (mayor==mat[i][j])
            {
                fil = i;
                col = j;

                cont = cont + 1;
            }

        }
    }  
    printf("Pero mira que calidad papa! el mayor es: %d y el ultimo registrado esta en las coordenadas %d,%d\n", mayor,fil,col);
    printf("El mayor fue registrado %d veces en la matriz\n", cont);
}

/*Para hacer que se cuente la primera vez que se encuentra hay que:
guardarlo en una variable con una bandera, la primera vez que se encuentra, que corte el ciclo y que despues de ahí
imprima el mensaje de su ubicacion.
Para sumarlo contamos la cantidad de veces que encontramos el valor y lo agregamos en un variable contador  */