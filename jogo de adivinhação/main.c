#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    
    printf ("\n Bem vindo ao jogo."); 
    printf ("\n aqui, você precisa adivinhar qual o número, entre 0 e 50. \n Se não, sofrerá as consequências de seus atos.");
    printf ("\n =========================================================");
    
        srand(time(0));
        int numero = rand() % 100; 
        printf ("(%d)\n", numero);
        
        int ganhou = 0;
        int tentativas;
        
    //escolhendo a dificuldade do jogo 
        printf (" você quer jogar em qual nível? \n (1) novato \n (2) bom \n (3) experiente \n (4) mestre \n sua escolha: ");
        scanf ("%d", &tentativas);
        switch (tentativas) {
            case 1:
            tentativas = 20;
            break;
            case 2:
            tentativas = 15;
            break;
            case 3:
            tentativas = 10;
            break;
            case 4:
            tentativas = 5;
            break;
        }
        
        for ( int i = 1; i <= tentativas; i++ )   {
        
        int chute;
        float pontos = 100;
        
        printf ("\n tentativa %d", i );
        printf ("\n digite o seu chute: ");
        scanf ("%d", &chute); 
        
        //números negativos
        if ( chute < 0 ) {
            printf (" você não pode chutar números negativos.");
            i--;
        }
        
        //mecânica do jogo
        if (chute == numero) {
            
            printf (" Parabéns, você acertou o número! \n");
            printf (" Você terminou com %2.f pontos", pontos);
            break;
            
        } else {
            
            pontos = pontos - (chute / 2);
            
            if (chute > numero) {
                printf (" O número é menor do que esse.");
                printf ("\n =============================");
            } else {
                printf (" O número é maior do que esse.");
                printf ("\n =============================");
            }
            printf ("%2.f", pontos);
            
        }
    }
    
    

} 








