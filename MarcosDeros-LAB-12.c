#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define caracters 10

void mix_words(char *word1, char *word2){
    for (int i  = 0; i < caracters; i++){
        if (i < strlen(word1)){
            printf("%c",word1[i]);    
        }
        if (i < strlen(word2)){
            printf("%c",word2[i]);    
        }
        
    }
    printf("\n");
}

int main() {
    char word1[caracters + 1];
    char word2[caracters + 1];

    printf("Digite a primeira palavra: ");
    scanf("%s",word1);
    printf("Digite a segunda palavra: ");
    scanf("%s",word2);
    
    mix_words(word1,word2);
    
}