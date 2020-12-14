#include <stdio.h>
#include <stdlib.h>

int main() {

	int dividendo, divisor, resto;
    double quociente;

	printf("Digite o valor do dividendo: ");
	scanf("%d", &dividendo);
	printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);
	quociente = dividendo / divisor;
    resto = dividendo % divisor;
    printf("Quociente = %0.2f / Resto = %d \n", quociente, resto);
    system ("pause");
}
