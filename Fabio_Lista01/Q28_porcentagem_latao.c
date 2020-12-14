#include <stdio.h>
#include <stdio.h>

int main(){

    double latao, porcent_cobre, porcent_zinco;
    printf("Digite a quantidade de latao em kg: ");
    scanf("%lf", &latao);

    porcent_cobre = latao * 0.7;
    porcent_zinco = latao * 0.3;

    printf("Essa quantidade de latao corresponde a %0.2fkg de cobre e %0.2fkg de zinco \n", porcent_cobre, porcent_zinco);
    system("pause");
}
