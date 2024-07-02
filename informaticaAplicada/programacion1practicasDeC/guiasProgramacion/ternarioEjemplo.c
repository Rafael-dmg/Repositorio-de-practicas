#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define p printf
#define s scanf

void Abs(int,int*);

int main()
{
    int num, res;

    p("\nIngrese un valor: ");
    s("%d",&num);

    res = (num>=0)? 1 : 0;

    /*
    if(num>=0)
        res = 1;
    else
        res = 0;


    if(res) // if(res==1)
        p("Es positivo");
    else
        p("Es negativo");
    */

    (res)? p("Es positivo") : p("Es negativo");

    return 0;
}

