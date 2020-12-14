#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(){
    int num, cont = 1, cand_01 = 0, cand_02 = 0, cand_03 = 0, nulo = 0, branco = 0, voto;
    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &num);
    printf("----------VOTACAO----------\n");
    printf("---Escolha seu candidato---\n");
    printf("Candidato 1----------- 1\n");
    printf("Candidato 2----------- 2\n");
    printf("Candidato 3----------- 3\n");
    printf("Voto nulo ------------ 9\n");
    printf("Voto branco ---------- 0\n");
    printf("-------------------------\n");
    
    while(cont <= num){
        printf("Digite o numero do candidato que deseja votar: ");
        scanf("%d", &voto);
        if(voto == 1){
            cand_01++;
        }
        else if(voto == 2){
            cand_02++;
        }
        else if(voto == 3){
            cand_03++;
        }
        else if(voto == 9){
            nulo++;
        }
        else if(voto == 0){
            branco++;
        }
        else{
            printf("Voto invalido, digite um numero valido!\n");
        }
        cont++;
    }
    if(cand_01 > cand_02 && cand_01 > cand_03){
        printf("O candidato 1, foi eleito com um total de %d votos\n",cand_01);
    }
    else if(cand_02 > cand_01 && cand_02 > cand_03){
        printf("O candidato 2, foi eleito com um total de %d votos\n",cand_02);
    }
    else if(cand_03 > cand_01 && cand_03 > cand_02){
        printf("O candidato 3, foi eleito com um total de %d votos\n",cand_03);
    }
    printf("Votos do candidato 1: %d\n",cand_01);
    printf("Votos do candidato 2: %d\n",cand_02);
    printf("Votos do candidato 3: %d\n",cand_03);
    printf("Votos em branco: %d\n",branco);
    printf("Votos nulo: %d\n",nulo);
    system("pause");
}
