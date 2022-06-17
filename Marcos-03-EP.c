#include <stdio.h>

int main() {

float salario;
float imposto;

printf("Digite seu salario: ");
scanf("%f", &salario);

if(salario <= 2000.00){
  imposto = 0.0;
  printf("Valor do imposto: %.2f\n", imposto);
} else {
 if(salario > 2000.0 && salario < 3000.01){
  float imposto1 = (salario - 2000.0)*0.08;
  imposto = imposto1;
  printf("Valor do imposto: %.2f\n", imposto);
 } else {
   if(salario > 3000.0 && salario < 4500.01){
  float imposto1 = 1000.0*0.08;
  float imposto2 = (salario - 3000.0)*0.18;
  imposto = imposto1 + imposto2;
  printf("Valor do imposto: %.2f\n", imposto);
  } else {
    if(salario > 4500.0){
      float imposto1 = 1000.0*0.08;
      float imposto2 = 1500.0*0.18;
      float imposto3 = (salario - 4500.0)*0.28;
      imposto = imposto1 + imposto2 + imposto3;
      printf("Valor do imposto: %.2f\n", imposto); 
    }
  }
 }
}




return 0;
}

