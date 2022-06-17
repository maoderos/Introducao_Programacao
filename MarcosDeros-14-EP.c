#include <stdio.h>
#define n_carac 50
#define n_alunos 2

typedef struct {
    char nome[n_carac];
    float nota1;
    float nota2;
    float media;
} aluno;

aluno ler_aluno(){
    aluno aluno_i;
   
    printf("Nome: ");
    gets(aluno_i.nome);
    printf("nota 1: ");
    scanf("%f", &aluno_i.nota1);
    setbuf(stdin,NULL);
    printf("nota 2: ");
    scanf("%f", &aluno_i.nota2);
    setbuf(stdin,NULL);
    aluno_i.media = (aluno_i.nota1 + aluno_i.nota2)/2;

    return aluno_i;
}

void escrever_arquivo(aluno* alunos, int n){
    FILE* arq;
    arq = fopen("notas_alunos.txt", "w");
    if (arq == NULL){
        printf("Nao pode abrir arquivo.\n");
    } else {
        fprintf(arq, "Nome nota1 nota2 media\n");
        for (int i = 0; i < n; i++){
            fprintf(arq, "%s %.2f %.2f %.2f\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].media);
        }
    }
    fclose(arq);

}

int main(){
    
    aluno alunos[n_alunos];
    printf("Digite os dados dos alunos.\n");
    for (int i=0; i < n_alunos; i++){
         printf("Aluno %d\n", i);
         alunos[i] = ler_aluno();
    }
    
    escrever_arquivo(alunos, n_alunos);




    return 0;
}