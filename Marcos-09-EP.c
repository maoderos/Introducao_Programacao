#include <stdio.h>

#define column 3
#define row 3

int main(){

    float matrix1[row][column];
    float matrix2[row][column];
    float matrix_sum[row][column];
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("a%d%d: ",(i+1),(j+1));
            scanf("%f",&matrix1[i][j]);
            }
        }
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("a%d%d: ",(i+1),(j+1));
            scanf("%f",&matrix2[i][j]);
            }
        }

    printf("MATRIZ A:\n");
    for (int i = 0; i < row; i++){
        printf("\t");
        for (int j = 0; j < column; j++){
            printf("%.2f ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ B:\n");
    for (int i = 0; i < row; i++){
        printf("\t");
        for (int j = 0; j < column; j++){
            printf("%.2f ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("A+B:\n");
    for (int i = 0; i < row; i++){
        printf("\t");
        for (int j = 0; j < column; j++){
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%.2f ",matrix_sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}