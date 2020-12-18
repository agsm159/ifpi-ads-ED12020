#include <stdio.h>
#include <stdlib.h>


void main(){
    
    int n, j, numero, *v_a, *v_b, *v_c;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    v_a = (int *)malloc(n-1 * sizeof(int));
    v_b = (int *)malloc(n-1 * sizeof(int));
    v_c = (int *)malloc((n * 2)-1 * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d", i);
        printf("Digite o %d valor do vetor A: ", i);
        scanf("%d", &numero);
        v_a[i] = numero;
    }

    for(int i = 0; i < n; i++){
        printf("%d", i);
        printf("Digite o %d valor do vetor B: ", i);
        scanf("%d", &numero);
        v_b[i] = numero;
    }

    for(int i = 0; i < n; i++){
        v_c[i] = v_a[i];
    }
    
    j = 0;
    for(int i = n; i <= n*2; i++){
        v_c[i] = v_b[j];
        j++;
    }


    for(int i = 0; i < n; i++){
        printf("%d ", v_a[i]);
    }

    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ", v_b[i]);
    }

    printf("\n");

    for(int i = 0; i <= (n*2)-1; i++){
        printf("%d ", v_c[i]);
        
    }
    printf("\n");
    system("pause");

}