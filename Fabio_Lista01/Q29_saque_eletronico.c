#include <stdio.h>
#include <stdio.h>

int main(){

    int saque, nota_50, nota_20, nota_10, nota_5, nota_2;
    printf("Digite a quantidade a ser sacada: ");
    scanf("%d", & saque);

    nota_50 = saque / 50;
    nota_20 = (saque % 50) / 20;
    nota_10 = ((saque % 50) % 20) / 10;
    nota_5 = (((saque % 50) % 20) % 10) / 5;
    nota_2 = ((((saque % 50) % 20) % 10) % 5) / 2;

    printf("Foram sacadas: %d notas de 50 \n", nota_50);
    printf("Foram sacadas: %d notas de 20 \n", nota_20);
    printf("Foram sacadas: %d notas de 10 \n", nota_10);
    printf("Foram sacadas: %d notas de 5 \n", nota_5);
    printf("Foram sacadas: %d notas de 2 \n", nota_2);
    system("pause");
}
