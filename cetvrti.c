#include <stdio.h>
#include <stdlib.h>

void main()
{
   int a,b;
   printf("\nUnesi cele brojeve a i b");
   scanf("%d %d",&a,&b);

   if (a<b)
    printf("\nx - %d",a + 2 * b);
   else
    printf("\nx - %d",2 * a - 3 * b);

   return;



    }


