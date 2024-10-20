#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 5

void CargarVector(char [N][30]);
void OrdenarAscendente(char[][30], int);
void OrdenarDescendente(char[][30], int);
void MostrarVector(char[][30], char *);

int main()
{
   char Nombres[N][30];
    CargarVector(Nombres);
    MostrarVector(Nombres,"Vector SIN ordenar");
    OrdenarAscendente(Nombres,N);
    MostrarVector(Nombres,"Vector Ordenado Ascendentemente");
    OrdenarDescendente(Nombres,N);
    MostrarVector(Nombres,"Vector Ordenado Descendentemente");
return 0;
}


void CargarVector(char Nombres[N][30])
{
    int i=0;
    int nombre[30];
    do
    {
        printf("Ingrese un Nombre, <%2d> de <%2d>: ",i+1,N);
        fflush(stdin);
        gets(nombre);
        strcpy(Nombres[i],nombre);
        system("cls");
        i++;
    }
    while (i<N);
};

void OrdenarAscendente(char Nombres[][30], int y)
{
        int i,k=1,cota,aux2;
        char aux[30];
        int longitud[N];
        for(i=0;i<N;i++)
        {
            longitud[i]=strlen(Nombres[i]);
        }
    cota=y-1;
    while(k)
    {
        k=0;
        for(i=0;i<cota;i++){

            if(longitud[i]>longitud[i+1])
            {
                strcpy(aux,Nombres[i]);
                strcpy(Nombres[i],Nombres[i+1]);
                strcpy(Nombres[i+1],aux);
                aux2=longitud[i];
                longitud[i]=longitud[i+1];
                longitud[i+1]=aux2;
                k=i;
            }
        }
        cota=k;
    };
};

void OrdenarDescendente(char Nombres[][30], int y)
{
        int i,k=1,cota,aux2;
        char aux[30];
        int longitud[N];
        for(i=0;i<N;i++)
        {
            longitud[i]=strlen(Nombres[i]);
        }
    cota=y-1;
    while(k)
    {
        k=0;
        for(i=0;i<cota;i++){

            if(longitud[i]<longitud[i+1])
            {
                strcpy(aux,Nombres[i]);
                strcpy(Nombres[i],Nombres[i+1]);
                strcpy(Nombres[i+1],aux);
                aux2=longitud[i];
                longitud[i]=longitud[i+1];
                longitud[i+1]=aux2;
                k=i;
            }
        }
        cota=k;
    };
};

void MostrarVector(char Nombres[][30], char *tit)
{
    int i=0;
    printf("\n%s\n",tit);
    do
    {
        printf("%s\n",Nombres[i]);
        i++;
    }
    while (i<N);

};
