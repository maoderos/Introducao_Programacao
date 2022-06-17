#include <stdio.h>

int main(){
    int num_alunos = 5;
    int alunos_InfMedia = 0;
    float media_turma = 0;
    int vec_matricula[num_alunos];
    float vec_nota1[num_alunos], vec_nota2[num_alunos], vec_nota_final[num_alunos];

    for (int i = 0; i < num_alunos; i++ ){
         
        printf("Aluno %01d\n", (i+1));
        printf("Matricula: ");
        scanf("%d", &vec_matricula[i]);
        printf("Nota 1: ");
        scanf("%f", &vec_nota1[i]);
        printf("Nota 2: ");
        scanf("%f", &vec_nota2[i]);
        
        vec_nota_final[i] = (vec_nota1[i] + vec_nota2[i])/2;
    }

    printf("No.Matricula\tNota01\tNota02\tNota Final\n");
    for (int i = 0; i < num_alunos; i++){
        printf("     %04d\t%.2f\t%.2f\t%.2f\n", vec_matricula[i], vec_nota1[i],vec_nota2[i],vec_nota_final[i]);

    }
    
    for (int i = 0; i < num_alunos; i++){
        media_turma = media_turma + vec_nota_final[i];
    }
    media_turma = media_turma/num_alunos;
    printf("Média da Turma: %.2f\n", media_turma);


    for (int i = 0; i < num_alunos; i++){
        if (vec_nota_final[i] < media_turma){
            alunos_InfMedia++;
        }
    }
    printf("Alunos com nota inferior à média: %d\n", alunos_InfMedia);

    return 0;
}
