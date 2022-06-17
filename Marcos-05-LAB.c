#include <stdio.h>

int main() {
    int continue_prog = 1;
    int soma = 0;
    while(continue_prog == 1){
        int num;
        printf("Digite um inteiro(digite 0 se quer parar): ");
        scanf("%d",&num);
        // Verificar se é par: numero % 2 == 0 
        if ((num % 2 == 0) && num > 0){
            soma = soma + num;
        }
        if (num == 0){
            continue_prog = 0;
        }


    }
    printf("Resultado da soma dos números pares: %d\n", soma);

    return 0;
}
