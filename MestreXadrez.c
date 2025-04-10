#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);    
    }
    }

void moverBispo(int casas){
if (casas == 0)return;
printf("Cima , Direita\n");
moverBispo(casas - 1);
}

void moverRainha(int casas){
if (casas == 0)return;
printf("Esquerda\n");
moverRainha(casas - 1);
}

//2. Loops Complexos para o Cavalo
void moverCavalo() {
//Duas casas para cima
for (int i = 0; i < 2; i++)
{
    printf("Cima\n");
}
  //Uma casa para a direita
    printf("Direita\n");
}

//3. Bispo com Loops Aninhados
void moverBispoAninhado() {
for (int i = 0; i < 5; i++)         //Loop externo (vertical)
{                                   //Loop interno (horizontal)
    for ( int j = 0; j < 1; j++)
    {
       printf("Cima, Direita\n");
    }
    
}


}


int main () {
 
    // ----- Movimentos básicos de outras peças -----
 printf("\nMovimentos basicos:\n");
 printf("Cima\n");
 printf("Baixo\n");
 printf("Esquerda\n");
 printf("Direita\n");

 
 printf("\nTorre (5 casas direita - recursivo):\n");
 moverTorre(5);
 
 printf("\nBispo (5 casas diagonal - recursivo):\n");
 moverBispo(5);
 
 printf("\nBispo (5 casas diagonal - loops aninhados):\n");
 moverBispoAninhado();
 
 printf("\nRainha (8 casas esquerda - recursivo):\n");
 moverRainha(8);
 
 printf("\nCavalo (2 cima + 1 direita - loops complexos):\n");
 moverCavalo();
 









    return 0;
}
    