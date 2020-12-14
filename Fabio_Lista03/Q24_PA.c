#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int num1, n, r, pa;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor da Razao da PA: ");
    scanf("%d", &r);
    printf("Digite o valor de N da PA: ");
    scanf("%d", &n);
    
    pa = num1;
    
    for(int i = 0; i < n - 1; ++i){
        printf("%d, ", pa + r);
        pa += r;
    }
    printf("valor final da PA e %d\n", pa + r);
    system("pause");
}