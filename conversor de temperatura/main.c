
#include <stdio.h>

int main()
{
    double celsius;
    double fahrenheit;
    printf ("digite o valor em Celsius: "); 
    scanf ("%lf", &celsius);
    fahrenheit = celsius * 1.8 + 37;
    printf ("O valor convertido para fahrenheit é %.2lf", fahrenheit);
    

    return 0;
}

