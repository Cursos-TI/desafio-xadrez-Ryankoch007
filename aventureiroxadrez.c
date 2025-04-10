#include <stdio.h>
// Definindo constantes para o movimento do cavalo
#define MOV_BAIXO 2 // Cavalo move 2 casas para baixo
#define MOV_ESQUERDA 1 // Cavalo move 1 casa para esquerda


int main () {
 
    // ----- Movimentos básicos de outras peças -----
 printf("Movimentos basicos:\n");
 printf("Cima\n");
 printf("Baixo\n");
 printf("Esquerda\n");
 printf("Direita\n");

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

// ----- Cavalo: Movimento em L (for + while) -----

printf("\nMovimento do Cavalo em (L) :\n");
// Duas casas para baixo
for (int i = 0; i < MOV_BAIXO; i++)
{
    printf("Baixo\n");


if (i == MOV_BAIXO - 1)
{
   //Uma casa para esquerda
    int contador = 0;
    while (contador < MOV_ESQUERDA)
    {
        printf("Esquerda\n");
        contador++;
    }
    
}






}





    return 0;
}