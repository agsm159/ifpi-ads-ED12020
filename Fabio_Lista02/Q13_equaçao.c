#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a, b, c;
    printf("Digite o valor do coeficiente A(ser diferente de 0): ");
    scanf("%d", &a);
    printf("Digite o valor do coeficiente B: ");
    scanf("%d", &b);
    printf("Digite o valor do coeficiente C: ");
    scanf("%d", &c);

    equacao(a, b, c);
    system("pause");
}

int equacao(a, b, c){
    
    double x1, x2, del;
    if(a != 0){
        del = pow(b, 2) - 4 * a * c;
        if(del == 0){
            printf("Equacao nao possui uma raiz real!\n");
        }
    } if(a == 0){
        printf("O valde de 'A'nao pode ser 0!\n");
    } else{
        x1 = (-b + sqrt(del)) / (2 * a);
        x2 = (-b - sqrt(del)) / (2 * a);

        printf("As raizes da equacao sao: x1 = %0.2f e x2 = %0.2f \n", x1, x2);
    }
}
