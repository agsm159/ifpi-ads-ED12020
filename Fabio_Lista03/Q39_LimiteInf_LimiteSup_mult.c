#include <stdio.h>
#include <stdlib.h>

void main(){

    int num, inicio, final, cont;
    printf("Digite um valor: ");
    scanf("%d", &num); 
    printf("Digite o valor inicial da sequencia numerica: ");
    scanf("%d", &inicio); 
    printf("Digite o valor final da sequencia numerica: ");
    scanf("%d", &final);

    cont = inicio;
    while (cont <= final){
        
        if(cont % num == 0){
            printf("%d\n", cont);
        }
        cont++;
    }
    system("pause");
}