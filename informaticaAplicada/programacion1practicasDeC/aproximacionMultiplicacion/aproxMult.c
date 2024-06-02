#include <stdio.h>
#include <math.h>
#define P printf
#define S scanf

int main ()
{
  int num, mult,resu;

  // P("Ingrese un numero\n");
  // S("%d", &num);

  // while(num < 10)
  // {
  //   num++;

  //   P("el valor de num ahora es %d\n", num);
  // }

  for(num = 1;num<10;num++)
  {
    for(mult=1; mult<10; mult++)
    {
      resu = num * mult;
    }
    P("%d\n", resu);
  }

return 0;
}