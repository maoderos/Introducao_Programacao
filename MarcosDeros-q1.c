/*
PROVA 1 - INF1040 - Questão 1
ALUNO: Marcos Antônio de Oliveira Derós
MATRÍCULA: 00289070
*/


#include <stdio.h>


#define row 6
#define column 3


int main() {
    float notas_alunos[row][column];
    int vetor_NumMenorProva[column] = {0}; //vetor para pegar o numero de alunos com nota baixa na prova

    // Ler a matrix

    printf("Digite a nota dos alunos:\n");

    for (int i = 0; i < row; i++){
        printf("Aluno %d\n", i);
        for (int j = 0; j < column; j++){
            printf("Prova %d: ", j);
            scanf("%f",&notas_alunos[i][j]);
        }
    }
    printf("\n");
    // loop para comparar as notas das provas
    for (int i = 0; i < row; i++){
        int indice;
        float nota;
        for (int j = 0; j < column; j++){
            if (j==0){
                indice = j;
                nota = notas_alunos[i][j];
            }
            if (notas_alunos[i][j] < nota){
                nota = notas_alunos[i][j];
                indice = j; 
            }
        }
        printf("Aluno %d menor nota na prova %d\n", i, indice);
        vetor_NumMenorProva[indice]++;
    }
    printf("\n");
    for (int i =0; i < column; i++){
        if (vetor_NumMenorProva[i]== 0 || vetor_NumMenorProva[i]== 1){
            printf("Prova %d: %d aluno\n",i,vetor_NumMenorProva[i]);
        } else {
            printf("Prova %d: %d alunos\n",i,vetor_NumMenorProva[i]);
        }
    }

    return 0;
}