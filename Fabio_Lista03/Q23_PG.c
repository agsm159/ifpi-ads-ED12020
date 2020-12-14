#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int num1, n, r, pg;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor da Razao da PG: ");
    scanf("%d", &r);
    printf("Digite o valor de N da PG: ");
    scanf("%d", &n);
    
    pg = num1;
    
    for(int i = 0; i < n - 1; ++i){
        printf("%d, ", pg * r);
        pg *= r;
    }
    printf("valor final da PG e %d\n", pg * r);
    system("pause");
}