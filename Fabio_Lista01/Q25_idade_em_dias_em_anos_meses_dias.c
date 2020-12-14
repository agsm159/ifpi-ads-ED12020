#include <stdio.h>
#include <stdlib.h>

int main(){

    int anos, meses, dias;
    printf("Digite a sua idade em dias: ");
    scanf("%d", &dias);

    meses = (dias % 365) / 30;
    anos = dias / 365;
    dias = dias - ((meses * 30) + (anos * 365));

    printf("Voce tem: %d anos %d meses %d dias \n" ,anos , meses ,dias);
    system("pause");
}
