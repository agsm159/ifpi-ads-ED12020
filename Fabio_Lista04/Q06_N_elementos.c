#include <stdio.h>
#include <stdlib.h>


void main(){
    
    int n, j, num, *v_a, *v_b;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    v_a = (int *)malloc(n-1 * sizeof(int));
    v_b = (int *)malloc(n-1 * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero do vetor A: ", i);
        scanf("%d", & v_a[i]);
        if (v_a[i] % 2 == 0){
            v_b[i] = 0;
        } else{
            v_b[i] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d", v_a[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        printf("%d", v_b[i]);
    }
    
    printf("\n");
    system("pause");

}