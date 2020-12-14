#include <stdio.h>
#include <stdlib.h>

int main(){

    double dinheiro, num_anos, num_cigarros, preco, total;
    printf("Numeros de anos que voce fuma: ");
    scanf("%lf", &num_anos);
    printf("Numeros de cigarros voce fuma por dia: ");
    scanf("%lf", &num_cigarros);
    printf("Preco do maco de cigarro: ");
    scanf("%lf", &preco);

    total = ((num_anos * 365) * num_cigarros) / 20;
    dinheiro = total * preco;

    printf("Voce gastou R$ %0.2f \n" ,dinheiro);
    system("pause");
}
