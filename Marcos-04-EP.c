#include <stdio.h>

int main () {
    char tipo;
    int unidades, limite_pedido;
    float preco, total_pagar;

    printf("Digite o tipo de pedido (A, B ou C): ");
    scanf("%c", &tipo);
    printf("Quantas unidades?");
    scanf("%d", &unidades);
    
    switch(tipo){
        case 'A':
            limite_pedido = 50;
            preco = 12.0;
            printf("Produto solicitado: %c\n", tipo);
            break;
        case 'B':
            limite_pedido = 30;
            preco = 15.5;
            printf("Produto solicitado: %c\n", tipo);
            break;
        case 'C':
            limite_pedido = 20;
            preco = 21.3;
            printf("Produto solicitado: %c\n", tipo);
            break;
        default:
            limite_pedido = -1;
            printf("tipo de pedido incorreto.");
            break;
    }
    
    if (limite_pedido > 0) {
        if (unidades > limite_pedido){
            printf("Limite de unidades para esse tipo de pedido excedido. Usaremos o limite de unidades\n");
            unidades = limite_pedido;

        }
        printf("Unidades: %d\n", unidades);
        total_pagar = unidades*preco;
        printf("Total a pagar: %.2f reais \n", total_pagar);
    }


    return 0;
}
