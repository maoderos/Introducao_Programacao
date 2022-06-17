#include <stdio.h>

int main() {

int mes, n_dias;

printf("Digite um número inteiro entre 1 a 12:");
scanf("%d", &mes);

switch (mes) {

   case 1:
      printf("Janeiro\n");
      printf("Dias: 31\n");
      break;
   case 2:
      printf("Fevereiro\n");
      printf("Dias: 28\n");
      break;
   case 3:
      printf("Março\n");
      printf("Dias: 31\n");
      break;
   case 4:
      printf("Abril\n");
      printf("Dias: 30\n");
      break;
   case 5:
      printf("Maio\n");
      printf("Dias: 31\n");
      break;
   case 6:
      printf("Junho\n");
      printf("Dias: 30\n");
      break;
   case 7:
      printf("Julho\n");
      printf("Dias: 31\n");
      break;
   case 8:
      printf("Agosto\n");
      printf("Dias: 31\n");
      break;
   case 9:
      printf("Setembro\n");
      printf("Dias: 30\n");
      break;
   case 10:
      printf("Outubro\n");
      printf("Dias: 31\n");
      break;
   case 11:
      printf("Novembro\n");
      printf("Dias: 30\n");
      break;
   case 12:
      printf("Dezembro\n");
      printf("Dias: 31\n");
      break;
   default:
      printf("mes inválido\n");
      break;

}
   

return 0;
}
