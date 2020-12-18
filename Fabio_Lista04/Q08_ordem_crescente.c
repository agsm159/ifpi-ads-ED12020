#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){
    
    int i, j, aux, v[10];
    
    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }
    
    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 10;j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    printf("\n Vetor ordenado");
    for(i=0;i<=4;i++){
        printf(">>> %d\n",v[i]);
    }
   
    system("pause");
}