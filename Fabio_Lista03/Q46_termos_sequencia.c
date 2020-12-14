#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int termo = 1,razao = 1,n;
    
    printf("Digite um valor da sequencia: ");
    scanf("%d", &n);
    
    while(n >= razao){
        printf(">>> %d\n",termo);

        razao = razao + 1;
        termo = termo + razao;
    }
    system("pause");
}
