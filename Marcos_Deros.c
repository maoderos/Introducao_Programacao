/*
PROVA 2 - INF01040
ALUNO: Marcos Antonio de Oliveira Deros
MATR�CULA: 00289070
*/

#include <stdio.h>
#include <string.h>
// QUEST�O(a) - Declara��o de Constantes
#define max_contas 100
#define max_nome 50
#define nome_arquivo "contas.txt"
// FIM QUEST�O(a)

// QUEST�O(b) - Estrutura para representar uma conta
typedef struct {
    int numero;
    char correntista[max_nome + 1];
    float saldo;
} Conta;

// FIM QUEST�O(b)

// PROT�TIPOS DAS FUN��ES
void le_contas(Conta vetor_contas[max_contas], int *n);
void imprime_conta(Conta c);
char imprime_menu();    
int busca_conta(Conta vetor_contas[max_contas], int tamanho, int *pos);
Conta nova_conta();
void saque(Conta *conta);
void deposito(Conta *conta);
void salva_contas(Conta vetor_contas[max_contas], int n);

// QUEST�O(k) - Fun��o Main
int main() {
    Conta contas[max_contas];
    int n_contas;
    le_contas(contas,&n_contas);
    printf("Contas recuperadas: %d\n", n_contas);
    int stop = 0;
    while(!stop){
        char opcao = imprime_menu();
        if (opcao == 'C'){
            contas[n_contas] = nova_conta();
            printf("Conta adicionada com sucesso.\n");
            imprime_conta(contas[n_contas]);
            n_contas++;
        } else if (opcao == 'L'){
            printf("Listando todas as contas\n");
            for(int i = 0; i< n_contas;i++){
                imprime_conta(contas[i]);
            }
        } else if (opcao == 'S') {
            int pos;
            int busca = busca_conta(contas,n_contas,&pos);
            if(busca){
                saque(&contas[pos]);
            } else {
                printf("Conta nao encontrada\n");
            }
        } else if (opcao == 'D') {
            int pos;
            int busca = busca_conta(contas,n_contas,&pos);
            if(busca){
                deposito(&contas[pos]);
            } else {
                printf("Conta nao encontrada\n");
            }
        } else if (opcao == 'E') {
            salva_contas(contas,n_contas);
            stop=1;
        }
    }
}

// QUEST�O(c) - Menu Principal
char imprime_menu() {
    printf("As opções disponíveis são:\n");
    printf("Opcao ‘C’ - Cadastrar nova conta\n");
    printf("Opcao ‘L’ - Listar todas as contas\n");
    printf("Opcao ‘S’ - Realizar Saque\n");
    printf("Opcao ‘D’ - Fazer Deposito\n");
    printf("Opcao ‘E’ - Encerrar Aplicacao\n");
    int stop = 0;
    char opcao;
    while(!stop){
        printf("Digite a opção desejada:");
        scanf("%s",&opcao);
        if (opcao == 'C' || opcao == 'L' || opcao == 'S' || opcao == 'D' || opcao == 'E'){
            stop = 1;
            return opcao;
        }
    }
}

// QUEST�O(d) - Cadastro de nova conta
Conta nova_conta() {
    Conta conta_nova;
    printf("Digite o numero da conta:");
    scanf("%d",&conta_nova.numero);
    setbuf(stdin,NULL);
    printf("Digite o nome do correntista:");
    gets(conta_nova.correntista);
    setbuf(stdin,NULL);
    printf("Digite o saldo:");
    scanf("%f",&conta_nova.saldo);
    setbuf(stdin,NULL);
    return conta_nova;
}

// QUEST�O(e) - Exibir dados de uma conta
void imprime_conta(Conta c) {
    printf("---------------------------\n");
    printf("numero: %d\n", c.numero);
    printf("correntista: %s\n",c.correntista);
    printf("saldo: %.2f\n",c.saldo);
    
}

// QUEST�O(f) - Saque
void saque (Conta *conta) {
    float valor;
    float saldo_conta = conta->saldo;
    printf("Digite o valor que você deseja sacar: ");
    int stop = 0;
    scanf("%f",&valor);
    if (valor > 0 && valor <= saldo_conta){
        conta->saldo = saldo_conta - valor;
        printf("Saque bem sucedido.");
        stop=1;
    } else if (valor < 0){
        printf("Valor negativo!\n");
    } else if (valor > saldo_conta) {
        printf("Valor maior que o saldo!\n");
    }
    

}

// QUEST�O(g) - Dep�sito
void deposito (Conta *conta) {
    float valor;
    float saldo_conta = conta->saldo;
    printf("Digite o valor que você deseja depositar: ");
    int stop = 0;
    scanf("%f",&valor);
    if (valor > 0){
        conta->saldo = saldo_conta + valor;
        printf("Deposito bem sucedido.\n");
        stop=1;
    }
    else {
        printf("Valor negativo!\n");
        stop=1;
    }

}

// QUEST�O(h) - Buscar una conta
int busca_conta(Conta vetor_contas[max_contas], int tamanho, int *pos) {
    int numero_conta;
    printf("Informe o numero da conta: ");
    scanf("%d",&numero_conta);
    for(int i = 0; i < tamanho; i++){
        if (vetor_contas[i].numero == numero_conta){
            *pos=i;
            return 1;
        }
    }
    return 0;
}

// QUEST�O(i) - Leitura dos dados do Arquivo
void le_contas(Conta vetor_contas[max_contas], int *n) {
    FILE* read_file;
    read_file = fopen(nome_arquivo, "r");
    int i = 0;
    if (read_file == NULL){
        printf("Arquivo nao pode ser aberto\n");
        *n = 0;
    } else {
       int stop = 0;
       while(!stop){
           if(fscanf(read_file,"%d",&vetor_contas[i].numero) != EOF) {
                fscanf(read_file,"%d",&vetor_contas[i].numero);
                fgets(vetor_contas[i].correntista, max_nome, read_file);
                // Removing "\n"
                vetor_contas[i].correntista[strlen(vetor_contas[i].correntista) - 1] =0;
                fscanf(read_file,"%f",&vetor_contas[i].saldo);
                i++;
           } else {
             stop =1;
           }
          
       }
    }
   

  fclose(read_file);
  *n = i;
}

// QUEST�O(j) - Escrever as contas no Arquivo
void salva_contas(Conta vetor_contas[max_contas], int n) {
    FILE* write_file;
    write_file = fopen(nome_arquivo, "w");

    for (int i=0; i < n; i++) {
        fprintf(write_file,"%d\n",vetor_contas[i].numero);
        fprintf(write_file,"%s\n",vetor_contas[i].correntista);
        fprintf(write_file,"%.2f\n",vetor_contas[i].saldo);
    }
    fclose(write_file);
}

// FUN��ES EXTRAS - UTILIZE ESTE ESPA�O PARA INCLUIR FUN��ES ADICIONAIS SE VOC� ACHAR NECESS�RIO.
