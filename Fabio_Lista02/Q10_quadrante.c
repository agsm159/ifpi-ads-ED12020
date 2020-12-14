#include <stdio.h>
#include <stdlib.h>

int main(){
    int ang;
    printf("Digite o valor do angulo(entre 0 e 360°): ");
    scanf("%d", &ang);
    
    if (ang <= 90){
        printf("Angulo pertecente ao primeiro quadrante.\n");
    } if(ang > 90 && ang <= 180){
        printf("Angulo pertecente ao segundo quadrante.\n");
    } if(ang > 180 && ang <= 270){
        printf("Angulo pertecente ao terceiro quadrante.\n");
    } if(ang > 270 && ang <= 360){
        printf("Angulo pertecente ao quarto quadrante.\n");
    }
    system("pause");
}
