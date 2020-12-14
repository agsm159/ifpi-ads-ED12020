#include <stdio.h>
#include <stdlib.h>

void main(){

    int inicio, limite;
    printf("Digite o valor de inicio: ");
    scanf("%d", &inicio);
    printf("Digite o limite: ");
    scanf("%d", &limite);

   for(int i = inicio; i <= limite; i++){
       if(i % 2 == 0){
           printf("%d \n", i);
       }
       
   }
    system("pause");
}
