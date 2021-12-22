#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float br;

 printf("\nUpisi broj: ");
 scanf("%f",&br);

 if (br == (int)br)
    printf("\n Broj je %d celi",(int)br);
 else
    printf("\n Broje %.2f nije celi",br);

    return;
}
