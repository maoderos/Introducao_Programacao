
#include <stdio.h>

#define numPessoas 10

char readInput(){
    int valido = 0;
    char input;
    while(valido == 0){
        scanf("%c",&input);
        if (input == 'M' || input == 'F'){
            valido = 1;
        } 
    }
    return input; 
}

int main(){
    int numM = 0;
    int numF = 0;

    for(int i = 0; i < numPessoas; i++){
        printf("Aluno %i\n", (i + 1));
        printf("sexo (M ou F):");
        char sexo = readInput();
        if (sexo == 'M'){
            numM += 1;
        } else if (sexo == 'F'){
            numF += 1;
        }

    }
    printf("Número de alunos: %i\n", numM);
    printf("Número de alunas: %i\n", numF);
    return 0;
}