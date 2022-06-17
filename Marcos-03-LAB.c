#include <stdio.h>

int main() {

int idade1, idade2, idade3;

printf("Digite a idade da 1 pessoa: ");
scanf("%d", &idade1);

printf("Digite a idade da 2 pessoa: ");
scanf("%d", &idade2);

printf("Digite a idade da 3 pessoa: ");
scanf("%d", &idade3);


if (idade1 >= idade2){
  if (idade1 >= idade3){
   printf("Maior idade é %d\n", idade1);
  }
  else {
   printf("Maior idade é %d\n",idade3);
  }
} else {
  if (idade2 >= idade3){
     printf("Maior idade é %d\n", idade2);
  }
  else {
     printf("Maior idade é %d\n", idade3);
  }
}






return 0;
}
