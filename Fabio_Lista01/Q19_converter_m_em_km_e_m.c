#include <stdio.h>
#include <stdlib.h>

int main() {

    int km, m, resto_m;
    printf("Digite o valor em metros: ");
    scanf("%d", &m);

    resto_m = m % 1000;
    km = (m - resto_m) / 1000;

    printf("%dkm e %dm \n", km, resto_m);
    system("pause");
}
