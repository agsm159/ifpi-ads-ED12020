#include <stdio.h>
#include <stdlib.h>

void main(){
  
  float dist_cidade = 600, litros_tanque = 50, dist_percorrida, litros_consumidos, consumo_carro, media_consumo;

  printf("Quantos km foram percorridos antes? ");
  scanf("%f", &dist_percorrida);
  printf("E quantos litros foram consumidos nesse ultimo percurso? ");
  scanf("%f", &litros_consumidos);

  media_consumo = litros_consumidos / dist_percorrida;
  consumo_carro = dist_cidade * media_consumo;

  if (consumo_carro > litros_tanque){
    printf("A viagem nao vai ser possivel.\n");
    printf("O consumo medio do carro e de %.2f l/km.\n", media_consumo);
  } else {
    printf("A viagem vai ser possivel.\n");
    printf("O consumo medio do carro e de %.2f l/km.\n", media_consumo);
  }
  system("pause");
}
