#include <stdio.h>
#include <stdlib.h>
#define tam 10


void main(){
    int v[tam];
    v[0] = 0;
    v[1] = 1;

    for(int i = 2; i < tam; i++){
        v[i] = v[i - 1] + v[i - 2];
    }

    for(int i = 0; i < tam; i++){
        printf(">>> %d\n", v[i]);
    }
    system("pause");

}