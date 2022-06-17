#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define carac 15
#define carac_raca 20
#define n_caes 10


typedef struct {
  char nome[carac+1];
  char raca[carac_raca+1];
  int idade;
} caes;

void cao_raca_maisvelho(caes* cachorros,char* raca_cao){
  int idade = 0;
  int indice = -1;
  printf("Cachorros da raça %s:\n",raca_cao);
  for(int i = 0; i < n_caes; i++){
    if (strcmp(cachorros[i].raca,raca_cao)==0){
      printf("%s\n",cachorros[i].nome);
      if (cachorros[i].idade > idade){
        idade = cachorros[i].idade;
        indice = i;
      }
    }
  }

  if(indice < 0){
    printf("Nao temos cachorros com essa raca no canil.\n");
  } else {
    printf("O cachorro %s é o mais velho da raca %s com %d anos\n",cachorros[indice].nome, cachorros[indice].raca, cachorros[indice].idade); 
  }

}

int main() {
  char raca_input[carac+1];

  caes cachorros[n_caes];
  printf("Digite os dados dos caes\n");
  for(int i = 0; i < n_caes; i++){
    printf("cao %d\n", i);
    
    printf("Nome: ");
    
    gets(cachorros[i].nome);
    
    printf("raca:");
    gets(cachorros[i].raca);
    
    printf("idade:");
    
    scanf("%d",&cachorros[i].idade);
    setbuf(stdin,NULL);
    
  }
  
  printf("Digite uma raca:");
  gets(raca_input);
  cao_raca_maisvelho(cachorros,raca_input);
  

  
  
  
  return 0;
}
