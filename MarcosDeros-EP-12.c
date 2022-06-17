#include <stdio.h>

#define n_notas 5
#define n_surfistas 3

float media_notas(float *notas){
    float maior_nota = 0;
    float menor_nota = 10;
    float soma = 0;
    
    for(int i = 0; i < n_notas; i++ ){
        soma += notas[i];
        
        
        if (notas[i] > maior_nota){
            maior_nota = notas[i];
        }
        if (notas[i] < menor_nota){
            menor_nota = notas[i];
        }
        

    }
    soma = soma - maior_nota - menor_nota;
    return (soma/(n_notas - 2));
}

void ranking(float *media){
    int indices[n_surfistas];
    for (int i = 0; i < n_surfistas; i++){
        indices[i] = i+1;
    }
    for (int i = 0; i < n_surfistas; i++){
        for (int j = 1 + i; j < n_surfistas; j++){
            if (media[i] < media[j]){
                float aux = media[i];
                int aux1 = indices[i];
                media[i] = media[j];
                media[j] = aux;
                indices[i] = indices[j];
                indices[j] = aux1;
            }        
        }
    }
    for (int i = 0; i < n_surfistas; i++){
        printf("surfista %d - %.2f\n",(indices[i]),media[i]);
    }
}


int main() {

    float medias[n_surfistas];

    for (int i = 0; i < n_surfistas; i++){
        float notas_jurados[n_notas];
        printf("surfista %d\n", (i+1));
        printf("Notas (0 a 10) \n");
        for(int j =0; j < n_notas; j++){
            printf("Jurado %d: ", (j+1));
            scanf("%f",&notas_jurados[j]);
        }
    
    medias[i] = media_notas(notas_jurados);
    }
    ranking(medias);
    
}