#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n_funcionarios 2

struct nascimento{
    int mes,ano,dia;
};

typedef struct{
    char nome[100 + 1];
    char endereco[200 + 1];
    int telefone[9];
    int idade;
    float salario;
    struct nascimento data;
} cadastro_pessoal;

int maior_salario(cadastro_pessoal* cadastros){
    float salario_aux = 0;
    int indice_maior_salario = 0;
     for(int i=0; i<n_funcionarios;i++){
        if (cadastros[i].salario > salario_aux){
            salario_aux = cadastros[i].salario;
            indice_maior_salario = i;
        }
    }
    return indice_maior_salario;
}
void ler_maiorSalario(cadastro_pessoal* cadastro){
    printf("Dados do funcionario com maior salario:\n");
    printf("Nome: %s\n", cadastro->nome);
    printf("Telefone: ");
    for(int i = 0; i<9;i++){
        printf("%d", cadastro->telefone[i]);
    }
    printf("\nIdade: %d\n",cadastro->idade);
    printf("Salario: %.2f\n",cadastro->salario);
    printf("Data de nascimento: %d/%d/%d\n",cadastro->data.dia,cadastro->data.mes,cadastro->data.ano);

}


int main(){
    int indice_maior_salario;
    cadastro_pessoal cadastros[n_funcionarios];
    printf("Digite os dados dos funcionarios\n");
    for (int i = 0; i < n_funcionarios; i++){
        printf("Funcionario %d\n", i);
        printf("Nome: ");
        gets(cadastros[i].nome);
        printf("Endereço: ");
        gets(cadastros[i].endereco);
        printf("Telefone: ");
        for(int j = 0; j < 9; j++){
            scanf("%d", &cadastros[i].telefone[j]);
        }
        printf("Idade: ");
        scanf("%d", &cadastros[i].idade);
        printf("Salario (em reais): ");
        scanf("%f",&cadastros[i].salario);
        printf("Nascimento:\n");
        printf("Ano: ");
        scanf("%d", &cadastros[i].data.ano);
        printf("mes: ");
        scanf("%d", &cadastros[i].data.mes);
        printf("dia: ");
        scanf("%d", &cadastros[i].data.dia);
        setbuf(stdin,NULL);
    }


    indice_maior_salario = maior_salario(cadastros);
    
    //print dados maior salario pelo indice
    ler_maiorSalario(&cadastros[indice_maior_salario]);
    return 0;
}