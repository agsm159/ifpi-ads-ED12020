#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(){
    int habitantes_a,habitantes_b,qtd_anos;
    habitantes_a = 200000;
    habitantes_b = 800000;
    qtd_anos = 0;
    while(habitantes_b > habitantes_a){
        habitantes_b = habitantes_b + (habitantes_b * 0.0135);
        habitantes_a = habitantes_a + (habitantes_a * 0.035);
        qtd_anos = qtd_anos + 1;
    }
    printf("A cidade A tera mais habitantes que a B em %d anos\n", qtd_anos);
    system("pause");
}
