#include <stdio.h>
#include <stdlib.h>

int main(){
    int ang1, ang2, ang3;
    printf("Digite o valor do angulo 1: ");
    scanf("%d", &ang1);
    printf("Digite o valor do angulo 2: ");
    scanf("%d", &ang2);
    printf("Digite o valor do angulo 3: ");
    scanf("%d", &ang3);

    if(ang1 == 0 || ang2 == 0 || ang3 == 0){
        printf("Os angulos devem ser maior que zero.\n");
    } else {
        if((ang1 + ang2 + ang3) == 180){
            printf("E possivel formar um triangulo com os angulos fornecidos.\n");
            if(ang1 < 90 && ang2 < 90 && ang3 < 90){
                printf("Ira ser formado um triangulo acutangulo.\n");
            } if(ang1 == 60 && ang2 == 60 && ang3 == 60){
                printf("Ira ser formado um triangulo retangulo.\n");
            } if(ang1 > 90 || ang2 > 90 || ang3 > 90){
                printf("Ira ser formado um triangulo obtusangulo.\n ");
            }
        } else {
            printf("Nao e possivel formar um triangulo com os angulos fornecidos.\n");
        }
    }
    system("pause");
}
