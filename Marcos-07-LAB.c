#include<stdio.h>

int main() {
    int vector_size = 20;
    int numbers[vector_size];
    int new_number = 0;
    int repetition = 0;
    printf("Digite 20 numeros:\n");

    for (int i =0; i < vector_size; i++){
        scanf("%d",&numbers[i]);
        
    }
    printf("Digite um novo número: ");
    scanf("%d", &new_number);
    
    for (int i = 0; i < vector_size; i++){
        if (new_number == numbers[i]){
            repetition++;
        }
    }

    printf("O número %d foi repetido %d vezes\n", new_number, repetition);
    return 0;
}
