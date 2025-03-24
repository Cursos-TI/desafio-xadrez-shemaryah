#include <stdio.h>
   int main(){
      // movimento da peça Cavalo.
     int i=1;
     
     do{
       
      for(int j=1; j <= 2; j++){  // 2 casas para baixo.
            printf("Baixo\n", j);
        }
      
        printf("Esquerda \n", i); //1 casa para a esquerda.
      i++;

      }while(i<=1); 
     
    

     return 0;
   }  

   