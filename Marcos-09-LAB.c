#include <stdio.h>

#define column 3
#define row 3
int main(){
    int matrix[row][column];
    printf("Digite os elementos da matriz (entre 0 e 30):\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            matrix[i][j] = -1;
            while(matrix[i][j] < 0 || matrix[i][j] > 30){
            printf("a%d%d: ",(i+1),(j+1));
            scanf("%d",&matrix[i][j]);
            }
        }
    }
    printf("MATRIZ ORIGINAL\n");
    for (int i = 0; i < row; i++){
        printf("\t");
        for (int j = 0; j < column; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("Valores máximos das colunas\n");
    for (int j = 0; j < column; j++){
        int value = 0;
        for (int i = 0; i < row; i++){
            if (matrix[i][j] > value){
                value = matrix[i][j];
            }
        }
        printf("[%d] = %d ",j,value);
    }
    printf("\n");


    return 0;
}