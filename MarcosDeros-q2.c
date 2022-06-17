/*
PROVA 1 - INF1040 - Questão 2
ALUNO: Marcos Antônio de Oliveira Derós
MATRÍCULA: 00289070
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define pos1 10
#define pos2 5
#define limite_vec1 1000
#define minimo_vec1 100
#define limite_vec2 10
#define minimo_vec2 1

int main() {
    srand(time(NULL));
    int vec1[pos1], vec2[pos2];

    printf("Vetor 1 [ ");
    for (int i = 0; i < pos1; i++){
       int rnd = (minimo_vec1) + rand() % (1 + limite_vec1 - minimo_vec1); //gera entre 0 e 900.  Soma 100 apos
       vec1[i] = rnd;
       printf("%d ", vec1[i]);
    }
    printf("]\n");
    printf("Vetor 2 [ ");
    for (int i = 0; i < pos2; i++){
        int rnd = minimo_vec2 + rand() % (limite_vec2);
        vec2[i] = rnd;
        printf("%d ", vec2[i]);
    }
    printf("]\n \n");
    for (int i = 0; i < pos1; i++){
        int existe_divisivel = 0;
        printf("Numero %d \n", vec1[i]);
        for (int j = 0; j < pos2; j++){
            if (vec1[i] % vec2[j] == 0){
                printf("Divisivel por %d na posicao %d \n", vec2[j], j);
                existe_divisivel = 1;
            }
        }
        if (existe_divisivel == 0){
            printf("Nao possui divisores no segundo vetor \n");
        }
        printf("\n");
    }



    return 0;
}