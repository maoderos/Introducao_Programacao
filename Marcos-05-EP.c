#include <stdio.h>

int main(){
    int numero_escolhido = 7;
    int continue_prog = 1;
    printf("Adivinhe o número(0 a 10):\n");
    while(continue_prog == 1){
        int num;
        printf("Digite um número:");
        scanf("%d", &num);

        if (num == numero_escolhido){
            printf("Parabéns! Acertou.\n");
            continue_prog = 0;
        }
        if (num >= 0 && num <= 10){
            if (num > numero_escolhido){
                // Se o numero tiver até (numero_escolhido + 3), é um pouco menor.
                // Caso contrario, é menor
                if (num <= (numero_escolhido + 3)){
                    printf("Quase acertou, o número é um pouco menor.\n");

                } else{
                    printf("Errou, o número é menor.\n");
                }
                
            } 
            if (num < numero_escolhido){
                // Se o numero tiver até (numero_escolhido -3), é um pouco maior.
                // Caso contrario, é amior
                if (num >= (numero_escolhido - 3)) {
                    printf("Quase acertou, o número é um pouco maior.\n");
                } else {
                    printf("Errou, o número é maior.\n");
                }
            }
        
        } else {
            printf("O número deve ser entre 0 a 10.\n");
        }


    }


    return 0;
}