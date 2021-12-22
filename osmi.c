#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj;
    printf("\n Unesi broj: ");

    if (broj<0)
        printf("\n Sledbenik je %d",broj + 1);
    else
        if (broj>0)
        printf("\n Prethodnik je %d",broj -1);
    else
        printf("\nBroj je jednak nuli");
    return;
}
