#include <stdio.h>
#include <stdlib.h>


void main(){
    
    int n, num, *v_a, maior = -9999, menor = 9999;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    v_a = (int *)malloc(n-1 * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero do vetor A: ", i);
        scanf("%d", & v_a[i]);
        if (v_a[i] >= maior){
            maior = v_a[i];
        }
        if (v_a[i] <= menor){
            menor = v_a[i];
        }

    }


    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    
    printf("\n");
    system("pause");

}