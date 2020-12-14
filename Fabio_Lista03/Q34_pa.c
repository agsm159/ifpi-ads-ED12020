#include <stdio.h>
#include <stdlib.h>

void main(){

    int valor_inicial, limite, razao, cont = 1, v = 0;
    printf("Digite o valor de inicio da progressao: ");
    scanf("%d", &valor_inicial);
    printf("Digite o limite progressao: ");
    scanf("%d", &limite);
    printf("Digite a razao progressao: ");
    scanf("%d", &razao);

    while (limite >= v){
        v = valor_inicial + (cont - 1) * razao;

        if(limite > v){
            printf("%d\n", v);
        }
        cont++;
    }
    system("pause");
}
