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
        if(cont == 2){
            printf(">>> %d\n",cont);
        }
        else if(cont % 2 != 0 && cont != 1){
            if(cont == 3 || cont == 5 || cont == 7 || cont == 11 || cont == 13 || cont == 17){
                printf(">>> %d\n",cont);
            }
            else if(cont % 3 != 0 && cont % 5 != 0 && cont % 7 != 0 && cont % 11 != 0 && cont % 13 != 0 && cont % 17 != 0){
                printf(">>> %d\n",cont);
            }
        }
        cont ++;
    }
    system("pause");
}
