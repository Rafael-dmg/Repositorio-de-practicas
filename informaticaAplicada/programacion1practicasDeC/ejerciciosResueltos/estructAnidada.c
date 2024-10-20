#include <stdio.h>
#define length 2
struct owner
{
    char nombre[30];
    char direccion[30];
};
struct dog
{
    char nombre[30];
    int edadMeses;
    struct owner ownerDog;
};
dogs[length];

int main()
{


struct estructAnidada
{
    /* data */
};

    for (int i = 0; i < length; ++i)
    {
        printf("Nombre del perro\n");
        scanf("%s",dogs[i].nombre);
        printf("Edad del perro en meses\n");
        scanf("%i",&dogs[i].edadMeses);
        printf("Nombre del tutor\n");
        scanf("%s",dogs[i].ownerDogs.nombre);
        printf("Direccion\n");
        scanf("%i",&dogs[i].ownerDog.direccion);        
    }
    for (int i = 0; i < length; ++i)
    {
       printf("El nombre del perro es\n",dogs[i].nombre);
       printf("La edad del perro es\n",dogs[i].edadMeses);
       printf("El nombre del tutor es\n",dogs[i].ownerDogs.nomre);
       printf("La direccion es\n",dogs[i].ownerDogs.direccion);
    }
    return 0;
    
}
