#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,det,a;
    float x1,x2,rx,ix;

    printf("\n Unesi koeficijente kvadratne jednacina a,b i c");
    scanf("%f %f %f",&a,&b,&c);

    det = b * b - 4 * a * c;
    if (det == 0) {

        x1 = -b / 2 * a;
        printf("\n jednacina ima jedno resenje: %.2f",x1);
    }
    else
    if (det > 0){

        x1 = (-b+sqrt(det)/2 *a);
        x2 = (-b-sqrt(det)/2 *a);

        printf("\nResenja jednacine su x1 = %.2f i x2 = %.2f",x1,x2);
    }

    else
    {
        rx = -b / 2 * a;
        m = abs(det);
        ix = sqrt(m) / 2 *a;

        printf("\nx1 = %.2f + %.2f i x2 = %.2f-%.2f",rx,ix,rx,ix);
    }


    return;
}
