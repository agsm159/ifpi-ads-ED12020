#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero, inverso, unidade, dezena, centena;
    printf("Digite um valor com 3 digitos: ");
    scanf("%d", &numero);  
    
    unidade = (numero % 100) % 10;
    dezena = (numero % 100) - unidade;
    centena = numero - (unidade + dezena);
    inverso = (unidade * 100) + dezena + (centena / 100);
    
    printf("resultado: %d \n", inverso);
    system ("pause");
}
