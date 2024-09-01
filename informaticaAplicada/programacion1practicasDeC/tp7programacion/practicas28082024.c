#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// int main()
// {
//   struct Persona
//   {
//     int cod;
//     char Apellido;

//   };

//   typedef struct Persona cliente;
  
// }

struct Persona
{
  char nombre [50];
  int edad;
};

void CargaDatos(struct Persona person1*,char[50]*,int*);

int main()
{
  CargaDatos(Persona, &nombre);
  //struct Persona person1;

  //strcpy(person1.nombre, "Juan");
  //person1.edad = 30;

  //printf("Nombre: %s\n", person1.nombre);
  //printf("Edad: %d\n", person1.edad);
}

void CargaDatos(Persona,char *nombre[50],int *edad)
{
  

  printf("Ingrese el nombre de la persona");


}