#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,kvadrat;
    float koren;
    print("\n Unesi celi broj x : ");
    scanf("%d"&x);
    if (x==0)
        printf("\nFunkcija je f(%d)=0",x);
    else
        if (x>0) {
    }

        koren = sqrt(x);
        printf("\nFunkcija f(%d) = %.2f",x);
        else {

            kvadrat = x *x;
            printf("\nFunkcija f(%d)=%d",x,kvadrat);
        }


    return;
}
