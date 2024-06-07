#include <stdio.h>
#include <math.h> 

int main()
{
    double cateto1;
    double cateto2; 
    double hipotenusa; 
    printf ("digite o valor do primeiro cateto: ");
    scanf ("%lf", &cateto1);
    printf ("digite o valor do segundo cateto: ");
    scanf ("%lf", &cateto2);
    hipotenusa = pow(cateto1, 2) + pow(cateto2, 2);
    hipotenusa = sqrt(hipotenusa);
    printf ("o valor da hipotenusa é: %.2lf", hipotenusa);

    return 0;
}

