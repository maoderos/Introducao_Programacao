#include <stdio.h>

int opcao(float valor){
    int escolha = 0;
    int aceite = 0;
    printf("Escolha uma opcao \n 1) Opcao: a vista com 10%% de desconto \n 2) Opcao: em duas vezes (preco da etiqueta) \n 3) Opcao: de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    printf("A opcao escolhida é: ");
    while(!aceite){
        scanf("%d",&escolha);
        if(escolha > 3 || escolha < 1){
            printf("Opçao incorreta. Digite novamente: ");
        } else{
            if (valor > 100){
                aceite = 1;
            } else if (valor < 100 && escolha == 3){
                printf("Opçao incorreta. Digite novamente: ");
            } else {
                aceite = 1;
            }

        }
    }
    return escolha;

}

void opcao1(float valor){
    printf("Valor a pagar: fatura de %.2f reais.\n", (0.9*valor));
}
void opcao2(float valor){
    printf("Valor a pagar: 2 parcelas de %.2f reais.\n", (valor/2));
}
void opcao3(float valor){
    int quantidade_parcelas;
    printf("Numero de parcelas (3 a 10): ");
    scanf("%d", &quantidade_parcelas);
    if(quantidade_parcelas >= 3 && quantidade_parcelas <= 10){
        float valor_juros = valor*0.03;
        printf("Valor da parcela: %.2f reais\n",((valor + valor_juros)/quantidade_parcelas));
    } else {
        printf("Numero de parcelas incorreto\n");
    }
    
}   

int main(){
    float valor_gasto;
    printf("Digite o valor gasto: ");
    scanf("%f", &valor_gasto);
    int opcao_escolhida = opcao(valor_gasto);
    if (opcao_escolhida == 1){
        opcao1(valor_gasto);
    } else if (opcao_escolhida == 2){
        opcao2(valor_gasto);
    } else if (opcao_escolhida == 3){
        opcao3(valor_gasto);
    } else {
        printf("Opcao incorreta.");
    }

}