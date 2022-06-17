#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 8

int main() {
   //char prefix[MAX]; // 7 caracteres (3).(3)
   srand(time(NULL));
   char ip[MAX + MAX];
   int num_aleatorios = 2; // numero de números aleatórios
   int num_limit = 255;
   printf("Informe o prefixo desejado (X.Y), numeros de 0 a 255: ");
   scanf("%s",ip);
 
 
  
   for(int i =0; i < num_aleatorios; i++){
      char rnd_str[MAX];
      int rnd = 1 + rand()%(num_limit+1);
      sprintf(rnd_str, ".%d",rnd);
      strcat(ip,rnd_str);
      
      
   }
      
    printf("Endereço de IP resultante: %s\n",ip);
   
   

   return 0;
}
