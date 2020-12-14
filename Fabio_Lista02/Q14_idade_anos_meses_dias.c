#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int id_anos, dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual;
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia_nasc);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes_nasc);
    printf("Digite o ano do nascimento: ");
    scanf("%d", &ano_nasc);
    printf("Digite o dia atual: ");
    scanf("%d", &dia_atual);
    printf("Digite o mes atual: ");
    scanf("%d", &mes_atual);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    verificar_idade(dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual);
    system("pause");
}
int verificar_idade(dia_n, mes_n, ano_n, dia_a, mes_a, ano_a){
    int dias, meses, anos;
    if ((dia_a >= dia_n && mes_a >= mes_n)||(dia_a < dia_n && mes_a >= mes_n)){
        meses = mes_a - mes_n;
        dias = dia_a - dia_n;
        if (dias < 0){
            dias = dias * -1;
        }
        anos = ano_a - ano_n;
        printf("A idade e: %d anos, %d meses e %d dias \n", anos, meses, dias);
    } if (mes_a < mes_n && dia_a >= dia_n){
        anos = (ano_a - ano_n) - 1;
        meses = 12 + (mes_a - mes_n);
        dias = dia_a - dia_n;
        printf("A idade e: %d anos, %d meses e %d dias \n", anos, meses, dias);

    }if (mes_a < mes_n && dia_a < dia_n){
        anos = (ano_a - ano_n) - 1;
        meses = 12 + (mes_a - mes_n) - 1;
        dias = 30 + (dia_a - dia_n) - 1;
        printf("A idade e: %d anos, %d meses e %d dias \n", anos, meses, dias);
    }
}
