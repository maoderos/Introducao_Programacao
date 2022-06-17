#include <stdio.h>

int main() {
    
    int dias, dia_semana;
    //Pegar inputs que estejam nas condições do while
    do{
        printf("Digite o número de dias do mes:");
        scanf("%d", &dias);
    } while(dias < 28 || dias > 31);
    do {
        printf("Digite o dia da semana que o mês começa:");
        scanf("%d", &dia_semana);
    } while(dia_semana > 7 || dia_semana < 1);
    // printar cabeçalho
    printf("\tDom\tSeg\tTer\tQua\tQui\tSex\tSab\n");
    // Ajustar a coluna em que inicia
    for (int i = 0; i < (dia_semana-1); i++){
        printf("\t");
    }
    int dia_semana_aux = dia_semana;
    for (int i = 1; i <= dias; i++){
        // se o dia da semana for maior que 7, é nova linha 
        if (dia_semana_aux > 7){
           dia_semana_aux = 1;
           printf("\n") ;
        }
        
        printf("\t%d", i);
        dia_semana_aux++;
    }
 printf("\n");
 return 0;
}

