#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int limite_sup,limite_inf,cont;
    
    printf("Digite o limite superior da sequecia: ");
    scanf("%d", &limite_sup);
    printf("Digite o limite inferior da sequecia: ");
    scanf("%d", &limite_inf);
    cont = limite_inf;
    
    while(cont <= limite_sup){
        if(cont % 2 != 0){
            printf(">>> %d\n",cont);
        }
        cont ++;
    }
    system("pause");
}
