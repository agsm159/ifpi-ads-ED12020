#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Investimento(double investimento, double taxa){
  double saldo;

  saldo = (investimento * (pow((1 + (taxa / 100)), 12))) + investimento * 12;
  
  return saldo;
}

void main(){
  double investimento, taxa, saldo;
  char opcao;

  printf("Investimento Mensal: ");
  scanf("%lf", &investimento);
  printf("E qual a taxa de juros ao mes: ");
  scanf("%lf", &taxa);

  saldo = Investimento(investimento, taxa);

  printf("Saldo do investimento em 1 ano: %.2f\n", saldo);

  printf("Deseja processar mais um ano (S - SIM | N - Não)? ");
  scanf("%c", &opcao);

  while (opcao == 'S')
  {
    saldo = Investimento(investimento, taxa);
    printf("Deseja processar mais um ano (S/N)? ");
    scanf("%c", &opcao);
  }
  system("pause");

}