#include <stdio.h>
#include <stdlib.h>


void main(){
    
    int n, j, numero, *v_a, *v_b;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    n--;
    v_a = (int *)malloc(n * sizeof(int));
    v_b = (int *)malloc(n * sizeof(int));
    
    for(int i = 0; i <= n; ++i){
        printf("Digite o %d valor do vetor: ", i);
        scanf("%d", &numero);
        v_a[i] = numero;
    }
    
    j = n;
    for(int i = 0; i <= n; i++){
        v_b[j] = v_a[i];
        --j;
    }
    
    for(int i = 0; i <= n; i++){
        printf("%d ", v_a[i]);
    }

    printf("\n");
    for(int i = 0; i <= n; i++){
        printf("%d ", v_b[i]);
    }
    printf("\n");
    system("pause");

}