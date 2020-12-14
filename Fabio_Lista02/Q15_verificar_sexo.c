#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char sexo;
    printf("Digite seu sexo(M - masculino/F - feminino):  ");
    scanf("%c", &sexo);
    
    if (sexo == 'M' || sexo == 'F'){
        if (sexo == 'M'){
            printf("Voce e do sexo masculino. \n");
        } if (sexo == 'F'){
            printf("Voce e do sexo feminino. \n");
        }
    } else{
        printf("Sexo inválido, tente novamente! \n");
    }
    system("pause");
}
