#include <stdio.h>
#define tam 50

int main(){
    
    int i, size;
	char caract, num[tam];

    printf("Digite os numeros que deseja ver por extenso: ");
    gets(num);

    size = strlen(num);

    for (i = 0; i <= size; i++){
		caract = num[i];
        
		switch (caract){
        case '0':
            printf("Zero\n");
            break;
        case '1':
            printf("Um\n");
            break;
        case '2':
            printf("Dois\n");
            break;
        case '3':
            printf("Tres\n");
            break;
        case '4':
            printf("Quatro\n");
            break;
        case '5':
            printf("Cinco\n");
            break;
        case '6':
            printf("Seis\n");
            break;
        case '7':
            printf("Sete\n");
            break;
        case '8':
            printf("Oito\n");
            break;
        case '9':
            printf("Nove\n");
            break;
        default:
            printf("%c", caract);
        }
    }
    system("pause");
}