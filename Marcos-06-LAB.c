#include<stdio.h>

int main() {
    int n=10;
    float peso_max = 0;
    float peso_min = 0;
    float peso_soma = 0;
    for (int i = 0; i < n; i++){
        float peso;
        printf("Digite o peso da pessoa %d: ",(i+1));
        scanf("%f",&peso);
        peso_soma = peso_soma + peso;
        if (i==0){
            peso_max = peso;
            peso_min = peso;
        } else {
            if (peso > peso_max) {
                peso_max = peso;
            }
            if (peso < peso_min) {
                peso_min = peso;
            }
        }

    }
    printf("Maior peso: %.2f \n", peso_max);
    printf("Menor peso: %.2f \n", peso_min);
    printf("Media de peso: %.2f \n", (peso_soma/n));
    return 0;
}