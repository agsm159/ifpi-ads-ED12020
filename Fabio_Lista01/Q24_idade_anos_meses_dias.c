#include <stdio.h>
#include <stdlib.h>

int main(){

    int anos, meses, dias;
    printf("Digite a sua idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    dias += (meses * 30) + (anos * 365);

    printf("Voce tem: %d dias\n",dias);
    system("pause");
}
