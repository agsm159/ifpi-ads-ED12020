#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

double vel_ms_retorna_kmh(double vel_ms){
    return vel_ms * 3.6;
}

double vel_kmh_retorna_ms(double vel_kmh){
    return vel_kmh / 3.6;
}

double dolar_para_real(double valor_dolar, double dolar){
    return dolar * valor_dolar;
}

double area_triangulo(double b, double h){
    return (b * h) / 2;
}

double area_quadrado(double l){
    return l * l;
}

double area_retangulo(double b, double h){
    return b * h;
}

double Comp_circunferencia(double r){
    return 2 * 3.14 * r;
}

double vol_esfera(double r){
    return 4 * 3.14 * (r * r * r);
}

double temp_C_para_F(double celsius){
    return (9 * celsius + 160) / 5;
}

double temp_F_para_C(double fahrenheit){
    return (5 * fahrenheit - 160) / 9;
}

double fatorial(double num){
    double i = num;
    
    while (i != 1){
        i = i - 1;
        num = num * i;

    }
    return num;
}

bool primo(int num){
    int cont = 0;
    
    for (int i = 2; i <= (num / 2); i++){
        if (num % i == 0) {
        cont++;
        }
    }
    if(cont == 0){
        return true;
    } 
    else{
        return false;
    }
}

bool data(int dia, int mes, int ano){
    if(mes < 1 && mes > 12){
        return false;
    } 
    else{
        if(dia < 1 && dia > 31){
            return false;
        }
        else{
            return true;
        }
    }
}

int mmc(int n1, int n2){
    return n2 * (n2 / mdc(n1, n2));
}

int mdc(int n1, int n2){
    
    while(n2 != 0){
        int resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    return n1;
}

bool ano(int ano){
    if(ano % 4 != 0){
        return false;
    }
    else{
        if(ano % 100 != 0){
            return true;
        } 
        else{
            if(ano % 400 != 0){
                return false;
            } 
            else{
                return true;
            }
        }
    }
}

int mdc_recursiva(int n1, int n2){
    
    if(n2 == 0){
        return n1;
    } 
    else{
        return mdc_recursiva(n2, n1 % n2);
    }
}

int fibonacci_recursiva(int numero){
    if(numero <= 1){
        return numero;
    } 
    else{
        return fibonacci_recursiva(numero-1) + fibonacci_recursiva(numero-2);
    }
}

int fatorial_recursiva(int numero){
    if(numero == 0){
        return 1;
    }
    else{
        return numero * fatorial_recursiva(numero - 1);
    }
}

int soma_todos_recursiva(int numero){
    int soma;
    if(numero == 0){
        return 0;
    } 
    else{
        soma = numero + soma_todos_recursiva(numero - 1);
    }

    return soma;
}