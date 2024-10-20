#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*int main()
{
    char cad[80] = "En un lugar de la Mancha";
    printf ("%30s\n", cad);
    return 0;
}*/


int main()
{
    char *cad = "En un lugar de la Mancha";
    printf ("%30s\n", cad);
    return 0;
}


/*int main ()
{
    unsigned int i;
    char cad[5];
    printf("Ingrese un Nombre:");
    scanf("%s",cad);
    printf("Largo de la cadena:%d\n", strlen(cad));
    for ( i = 0; i < strlen(cad); i++)
    {
        printf("-%c-", cad[i]);
    }
    return 0;
}

int main ()
{
    unsigned int i;
    char *cad = "En un lugar de la Mancha";
    printf("%30s\n", cad);
    printf("Largo de la cadena:%d\n", strlen(cad));
    for ( i = 0; i < strlen(cad); i++)
    {
        printf("%c - %x - %d\n", cad[i], cad[i], cad[i]);
    }
    return 0;
}

int main ()
{
    unsigned int i;
    char *cad = "En un lugar de la Mancha";
    printf("%30s\n", cad);
    printf("Largo de la cadena:%d\n", strlen(cad));
    for ( i = 0; i < strlen(cad); i++)
    {
        printf("-%c-", *(cad + i));
    }
    return 0;
}

int main ()
{
    char source[] = "Hola, mundo!";
    char destination[20];

    strcpy (destination, source);

    printf("Cadena fuente: %s\n", source);
    printf("Cadena destino: %s\n", destination);

    return 0;
}

int main ()
{
    char str1[]="Hola";
    char str2[]="Chau";
    int c;
    c=strcmp(str1,str2);

    if(c==0)
    {
        printf("Las cadenas son iguales.\n");
    } else if (c<0){
        printf("La cadena str1 es menor que str2.\n");
    } else {
        printf("La cadena str1 es mayor que str2.\n");
    }

    return 0;
}

int main () {

    char str1[]="Hola";
    char str2[]="HOLA";
    int c;

    for (int i=0; str1[i]; i++ ) {
        str1[i] = tolower((unsigned char) str1[i]);
    }
    for (int i=0; str1[i]; i++ ) {
        str1[i] = tolower((unsigned char) str1[i]);
    }
    c = strcmp(str1,str2);
    if (c==0) {
        printf("Las cadenas son iguales (ignorando mayusculas/minusculas).\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}*/
