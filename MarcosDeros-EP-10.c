#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define nVezes 1000
#define nFaceDados 6

int Dado(){
    int rnd = rand() % nFaceDados + 1; // 1 a 6
    return rnd;
}

int main(){
    srand(time(NULL));
    int vezes_numeros[6] = {0};

    for (int i = 0; i < nVezes; i++){
        int num = Dado();
        vezes_numeros[num-1] += 1;
    }
    
    for (int i = 0; i < nFaceDados; i++){
        float porcentagem = (float)vezes_numeros[i]/(float)nVezes;
        printf("Numéro %i for sorteado %.2f por cento das vezes\n", (i+1),porcentagem);
    }

    return 0;
}
    