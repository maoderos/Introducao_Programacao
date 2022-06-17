#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 500

int main (){
 
   char frase[MAX];
   char string_interesse = ' '; 
   int num_espacos = 0;
   
   printf("Informe uma frase com no máximo 500 linhas: ");
   fflush(stdin);
   gets(frase);
   for (int i = 0; i < strlen(frase); i++ ){
      //printf("%c\n",frase[i]);
      
      if (frase[i] == string_interesse){
         num_espacos++;
      }
    
   }

   printf("Números de espaços da frase: %d\n", num_espacos);




   return 0;
}
