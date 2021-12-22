#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br1,br2;
    printf("\nUnesi dva cela broja: ");

    if (br1>br2)
        printf("\nPrvi je veci a razlika je %d",br1-br2);

    else
        if (br2>br1)
        printf("\nDrugi je veci ,a razlika je %d",br2-br1);

        else
            printf("\n Brojevi su jednaki");


    return;
}
