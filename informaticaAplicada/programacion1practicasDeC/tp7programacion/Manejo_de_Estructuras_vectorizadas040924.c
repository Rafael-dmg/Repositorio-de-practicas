#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define P printf
#define S scanf
#define long 4

// typedef struct  
//  { 
//      int dia; 
//      int mes; 
//      int anio; 
//  }Fecha; 
  
 typedef struct  
 { 
     int codigo; 
     char nombre[50]; 
     char apellido[50]; 
     //Fecha fechaNacimiento; 
 }Cliente; 

void CargarCliente(Cliente[]);
//void MostrarCliente(Cliente[], char *, int);
//void OrdenarClientesPorCodigo(Cliente[], int);
//void OrdenarClientesPorApellido(Cliente[], int);
//void OrdenarClientesPorApellido(Cliente[], int);
//int BuscarCliente(int, Cliente[], int);

int main()
{   
    Cliente clientes[long];

    CargarCliente(clientes);
    
    

    return 0;
};

void CargarCliente(Cliente clientes[long])
{

    for ( int i = 0; i < long; i++)
    {
        P("Ingrese codigo del empleado %d\n: ", i);
        S("%d", &clientes[i].codigo);

        // P("Ingrese nombre del empleado %d\n: ", i);
        // S("%[^\n]", clientes[i].nombre);

        // P("Ingrese codigo del empleado %d\n: ", i);
        // S("%[^\n]", clientes[i].apellido);

        // getchar();
    }
    
    
    for (int i = 0; i < long; i++)
    {
        P("%d\n", clientes[i].codigo);
    }
    
    
    
        //gets(emp[i].nombre);
};



/*
- Al cargar los struct en una funcion, no se puede pasar por el nombre del struct directamente por eso se le da el sinonimo de tipo.
- Para cargar el espacio entre palabras, nombres, etc, en una cadena de caracteres se usa el  ^
- Con gets tambien se puede hacer la captura de los datos con espacio, por ejemplo emp[i].cond
- Para ingresar en un struct dentro de otro struct lo unico que tenemos que hacer es darle la direccion correcta, ejm: emp[i].nac.dia
- investigar cant_reg
*/
