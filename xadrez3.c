#include <stdio.h>

void moverTorre(int casas){
    if(casas>0){
        printf("Direita\n");
        moverTorre(casas-1);
    
    }
}

void moverBispo(int casas){
    if(casas>0){
        for (int i = 1; i < casas; i++) {  // Loop para simular múltiplos movimentos por chamada
            for (int j = 0; j < 2; j++) {  // Simula um movimento na diagonal
                if (j == 0) {
                    printf(" Cima\n");
                } else {
                    printf("Direita\n");
                }
            }
        }
        moverBispo(casas - 3);
    }
 }
   
    




void moverRainha(int casas){

    if(casas>0){
        printf("Esquerda\n");
        moverRainha(casas-1);
    }
}

void moverCavalo(int casas){

    if(casas>0){
        
        printf("Cima \n");
        printf("Cima \n");
        printf("Direita \n"); //mover o Cavalo duas casas a cima e uma a direita.
        moverCavalo(casas-1);
    }
}
        
int main(){
    printf("\nMovendo a Torre:\n");
    moverTorre(5);

    printf("\nMovendo o Bispo:\n");
    moverBispo(5);

    printf("\nMovendo a Rainha:\n");
    moverRainha(8);

    printf("\nMovendo o Cavalo em:\n");
    moverCavalo(1);
    return 0;
}




           


        

       