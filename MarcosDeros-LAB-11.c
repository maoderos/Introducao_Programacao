#include <stdio.h>



void imprimir_matriz(int N, int M,char caractere){
    for (int i =0; i < N; i++){
        for(int j =0; j < M; j++){
            printf("%c",caractere);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int M,N;
    char caractere;
    printf("Digite o caractere que voce quer imprimir: ");
    scanf("%c",&caractere);
    printf("Digite o numero de caracteres: ");
    scanf("%d",&M);
    printf("Digite o numero de linhas: ");
    scanf("%d",&N);
    imprimir_matriz(N,M,caractere);

    return 0;
}