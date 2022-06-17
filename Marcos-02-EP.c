#include <stdio.h>


int main() {

int cartao_ufrgs;

float P1,P2,LABs,EPs,QTs, MP, AP, MF;

printf("Digite seu cartao UFRGS: ");
scanf("%d", &cartao_ufrgs);

printf("Digite a nota da Prova 1: ");
scanf("%f", &P1);

printf("Digite a nota da Prova 2: "); 
scanf("%f", &P2);

printf("Digite a media dos laboratorios: ");
scanf("%f", &LABs);

printf("Digite a media das entregas programadas: ");
scanf("%f", &EPs);

printf("Digite a media dos questioanarios: ");
scanf("%f", &QTs);


MP = 0.4*P1 + 0.6*P2;
AP = 0.4*EPs + 0.4*LABs + 0.2*QTs;
MF = 0.5*MP + 0.5*AP;

printf("Numero do Aluno: %d\n", cartao_ufrgs);
printf("Media das provas: %.2f\n", MP);
printf("Media das atividades praticas : %.2f\n", AP);
printf("Media final: %.2f\n", MF);



return 0;
}
