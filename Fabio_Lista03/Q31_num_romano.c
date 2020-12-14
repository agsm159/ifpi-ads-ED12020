#include <stdio.h>
#include <stdlib.h>

void main(){

    char num[2], num1, num2, num3;
    printf("Numero de 3 digitos: ");
    scanf("%s",&num);
    strncpy(num1, num[0], 1);
    
    strncpy(num2, num[1], 1);

    strncpy(num3, num[2], 1);


    if(strcmp(num1, "1") == 0){
        printf("C");
    } else if(strcmp(num1, "5") == 0){
        printf("D");
    }

    if(strcmp(num2, "1") == 0){
        printf("X");
    } else if(strcmp(num2, "5") == 0){
        printf("L");
    }

    if(strcmp(num2, "1") == 0){
        printf("I");
    } else if(strcmp(num3, "5") == 0){
        printf("V");
    }
    system("pause");
    
}
