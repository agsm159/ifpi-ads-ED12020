#include <stdio.h>
#include <stdlib.h>

float num_container(){
    int container;
    float cont, peso;
    for (int i = 0; i < container; i++){
        printf("Digite o peso de %i container: \n", i);
        scanf("%d", &container);
        cont += peso;
    }
}

float combustivel(){
    float l, peso;
    printf("Qual a quantidade de combustivel: ");
    scanf("%f", &l);
    peso = l * 1.5;
    return peso;

}

float num_pessoas(){
    int bilhete, quant_pessoas, quant_bagagens, cont;
    printf("Qual a quantidade de passageiros: ");
    scanf("%d", &quant_pessoas);
    cont = 0;
    quant_bagagens = 0;
    for(int i = 0; i <= quant_pessoas; i++){
        printf("Qual o numero do bilhete: \n", i);
        scanf("%d", &bilhete);
        printf("Qual o numero do bilhete: \n", i);
        scanf("%d", &quant_bagagens);

        cont += quant_bagagens;
    }
    quant_pessoas = quant_pessoas * 70;
    quant_bagagens = quant_bagagens * 30;
    return quant_bagagens + quant_pessoas;
}

int main(){

    const peso = 500000;
    float combust, peso_total;
    combust = combustivel();

    if(combust >= 15000){
        peso_total += combust;
        peso_total += num_container();
        peso_total += num_pessoas();
        if(peso_total == 500){
            printf("Voo autorizado!");
        }else{
            printf("Voo nao autorizado!");
        }
    }else{
        printf("Aviao nao possui a quantidade nescessaria para a viagem, saida nao autorizada!");
    }
    
    system("pause");
}
