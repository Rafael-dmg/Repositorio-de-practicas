#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define long 50

typedef struct
{
  char nombre [50];
  int edad;
}Persona;

void CargaDatos(Persona[]);

int main()
{
  Persona pers[long];

  CargaDatos(pers);
  printf("El nombre de la persona es, %s\n", pers[0].nombre);
  printf("La edad de la persona es, %d\n", pers[1].edad);

  //struct Persona person1;

  //strcpy(person1.nombre, "Juan");
  //person1.edad = 30;

  //printf("Nombre: %s\n", person1.nombre);
  //printf("Edad: %d\n", person1.edad);

  return 0;
}

void CargaDatos(Persona pers[long])
{
  printf("Ingrese el nombre de la persona: \n");
  gets(pers[0].nombre);
  printf("Ingrese la edad de la persona: \n");
  scanf("%d", &pers[1].edad);
}