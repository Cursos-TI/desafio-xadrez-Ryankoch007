#include <stdio.h>
int main () {


    // ----- Torre: 5 casas para a direita (for) -----
printf("\nMovimento da Torre: 5 casas para a direita! \n");
    for (int i = 0; i < 5; i++)
{
    printf("Direita\n"); // Imprime a direção do movimento
}    


// ----- Bispo: 5 casas na diagonal superior direita (while) -----
printf("\nMovimento do Bispo: 5 casas na diagonal superior direita!\n");
int casas_bispo = 0;
while (casas_bispo < 5)
{
printf("Cima, Direita\n");
casas_bispo++;
}

 // ----- Rainha: 8 casas para a esquerda (do-while) -----
printf("\nMovimento da Rainha: 8 casas para a esquerda!\n");
int casas_rainha = 0; 
do
{
    printf("Esquerda\n");
   
    casas_rainha++;
} while (casas_rainha < 8);




    return 0;
}