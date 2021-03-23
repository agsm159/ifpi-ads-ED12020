#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#define tam 50

int main(){

    char senha[tam], senhaCorreta[tam] = "ads", senha2;
    int i = 0, ch, comp;

    printf("Digite sua senha: ");

    while (true){
        ch = getch();
        if (ch == 13) 
            break ;
        if (ch == 8) 
        {
            if(i == 0) continue;
            --i; 
            system("CLS");
            printf("Digite sua senha: ");
            for(int a = 0; a < i; a++)
                printf("*");
            continue;
        }
        printf("*");
        senha[i] = ch;
        i++;
    }

    
    for(int x = 0; x < i; x++){
        comp = strcmp(senha, senhaCorreta);
        if(comp == 0){
            printf("\nSenha correta!\n");
            break;
        } else{
            printf("\nSenha incorreta!\n");
            printf("A senha correta e %s", senhaCorreta);
            break;
        }
    }
    
    printf("\n");
    system("PAUSE");
}