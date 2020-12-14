#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int valor_inicial, limite, razao, cont = 0, v = 0;
    printf("Digite o valor inicial da progressao: ");
    scanf("%d", &valor_inicial);
    printf("Digite o limite da progressao: ");
    scanf("%d", &limite);
    printf("Digite a razao da progressao: ");
    scanf("%d", &razao);

    while (limite >= v){
        v = valor_inicial * pow(razao, (cont - 1));

        if(limite > v){
            printf("%d\n", v);
        }
        cont++;
    }
    system("pause");
}