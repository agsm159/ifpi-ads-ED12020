#include <stdio.h>
#include <stdlib.h>

void main(){

    int num, limite, total = 0;
    double media;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &limite);

    for(int i = 0; i < limite; ++i){
        printf("Digite o numero: ");
        scanf("%d", &num);
        total += num;
    }
    media = total / limite;
    printf("Total: %d\n", total);
    printf("Media: %0.2f\n", media);
    system("pause");
}
