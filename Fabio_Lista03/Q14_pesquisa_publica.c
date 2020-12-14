#include <stdio.h>
#include <stdlib.h>

void main(){
    int voto, serra = 0, dilma = 0, ciro = 0, indeciso = 0 , outro = 0, nulo_branco = 0,total_voto = 0;

    printf("----------VOTACAO----------\n");
    printf("---Escolha seu candidato---\n");
    printf("Serra ---------------- 45\n");
    printf("Dilma ---------------- 13\n");
    printf("Ciro Gomes ----------- 23\n");
    printf("Outro ---------------- 98\n");
    printf("Voto nulo/branco ------ 0\n");
    printf("Voto indeciso -------- 99\n");
    printf("-------------------------\n");

    while (voto != -1){
        printf("Digite qual a sua escolha(-1 para interromper): ");
        scanf("%d", &voto);
        if(voto == 45 || voto == 13 || voto == 23 || voto == 98 || voto == 0 || voto == 99 || voto == -1){
            total_voto++;

            switch (voto){
            case 45:
                serra++;
                break;
            case 13:
                dilma++;
                break;
            case 23:
                ciro++;
                break;
            case 98:
                outro++;
                break;
            case 0:
                nulo_branco++;
                break;
            case 99:
                indeciso++;
                break;
            default:
                break;
            }
            printf("Voto invalido! Tente novamente.\n");
        }
    }
    printf("Total de pessoas votando: %d\n", (total_voto - 1));
    printf("Total de votos para Serra: %d\n", serra);
    printf("Total de votos para Dilma: %d\n", dilma);
    printf("Total de votos para Ciro Gomes: %d\n", ciro );
    printf("Total de votos nulos/branco: %d\n", nulo_branco);
    printf("Total de votos para indecisos: %d\n", indeciso);
    system("pause");

}
