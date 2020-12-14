#include <stdio.h>
#include <stdlib.h>

void main(){

    double emprestimo, valor_diario, juros;
    int dias = 0, total_dias;

    emprestimo = 3000;
    valor_diario = 200;
    
    while(emprestimo != valor_diario){
        valor_diario += 200;
        dias++;
        total_dias = dias + 1;
        juros = total_dias * 0.0085;

    }
    printf("Passaram-se %d dias para pagar o emprestimo.\n", total_dias);
    printf("Juros a ser pago: R$%0.2f \n", juros);
    system("pause");

}