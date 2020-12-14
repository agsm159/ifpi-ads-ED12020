#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num = 0, aleatorio;
    
    while(aleatorio != num){
        aleatorio = rand() % 10;
        printf("Digite o numero: ");
        scanf("%d", &num);
        
        if(aleatorio == num){
            printf("Iguais\n");
        } else if(aleatorio > num){
            printf("menor\n");
        } else{
            printf("maior\n");
        }
    }
    system("pause");
        
}
