#include <stdio.h>
#define PI 3.14

int main()
{
    double raio; 
    double circuferencia;
    printf ("digite o valor do raio: ");
    scanf ("%lf", &raio);
    circuferencia = (2*raio*PI);
    printf ("O valor da circuferência é %.2lf.", circuferencia);
    
    
    
    return 0;
}



