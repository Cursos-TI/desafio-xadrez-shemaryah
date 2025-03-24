#include <stdio.h>
  int main(){
    int i;
   //mover a peça Torre 5 casas para a direita.

    for(int i=0; i < 5; i++){
        printf("Direita\n");
    }
     
    //mover a peça Bispo 5 casas, em diagonal.
     i= 1;

     while(i <= 5){
       printf("Cima, Direita\n", i);
       i++;
    }
       
        // mover a peça Rainha 8 casas para a esquerda.
      i= 1;
     do {
      printf("Esquerda\n", i);
      i++;

    }while(i <= 8);

      return 0;
      
     
      
  }