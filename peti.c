#include <stdio.h>
#include <stdlib.h>

void main()
{
  int br1,br2,br3,max;
  max = br1;
  printf("\nUnesi tri broja: ");
  scanf("%d %d %d",&br1,&br2,&br3);
  if (br2>max)
    max = br2;
  if (br3 > max)
    max = br3;

  printf("\n Najveci broj je %d",max);

   return;


    }


