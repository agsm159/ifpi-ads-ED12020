#include <stdio.h>
#include <stdlib.h>


void main(){
    int n, j, *v_a, *v_b, *v_c;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    v_a = (int *)malloc(n-1 * sizeof(int));
    v_b = (int *)malloc(n-1 * sizeof(int));
    

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero do vetor A: ", i);
        scanf("%d", &v_a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero do vetor B: ", i);
        scanf("%d", &v_b[i]);
    }
    
    v_c = (int *)malloc((n * 2)-1 * sizeof(int));

    for(int i = 0; i < n; i++){
        v_c[i] = v_a[i];
        j = i + 1;
    }

    for(int i = 0; i < n; i++){
        v_c[j] = v_b[i];
        j++;
    }

    for(int i = 0; i <= (n*2)-1; i++){
        printf("%d ", v_c[i]);
    }

    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if(v_a[j] == v_b[i]){
                printf("\n%d = %d\n", v_a[j], v_b[i]);
            }
        }
    }
    printf("\n");
    system("pause");

}