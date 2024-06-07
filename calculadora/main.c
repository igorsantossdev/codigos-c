#include <stdio.h>

int main()
{
    double valor1, valor2, resultado;
    int escolha;
    
    printf(" digite o primeiro valor: ");
    scanf("%lf",&valor1);
    printf(" digite o segundo valor: "); 
    scanf ("%lf", &valor2);
    printf (" escolha a operação que deseja realizar:\n (1)adição \n (2)subtração \n (3) multiplicação \n (4) divisão \n sua escolha: ");
    scanf ("%d", &escolha); 
    
    switch (escolha) {
        case 1: 
        resultado = valor1 + valor2;
        printf (" o resultado da sua operação é %.2lf", resultado);
        break;
        
        case 2: 
        resultado = valor1 - valor2; 
        printf (" o resultado da sua operação é %.2lf", resultado);
        break; 
        
        case 3: 
        resultado = valor1 * valor2; 
        printf (" o resultado da sua operação é %.2lf", resultado);
        break;
        
        case 4:
        resultado = valor1 / valor2;
        printf (" o resultado da sua operação é %.2lf", resultado);
        break;
        
        default: 
        printf (" por favor, digite uma das opções. \n\n ");
        break;
    }

    return 0;
}

