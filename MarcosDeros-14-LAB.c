#include <stdio.h>


int main(){
  char filename[20];
  char ch[100];
  FILE *read_file;
  printf("Digite o nome do arquivo que deseja ler: ");
  scanf("%s",&filename);

  read_file = fopen(filename, "r");
  if (read_file == NULL){
    printf("Arquivo nao pode ser aberto");
  } else {
    int i = 1;
    while( fgets(ch, 100-1, read_file) != NULL ){
      printf("%d %s",i,ch);
      i++;
    }
  }

  fclose(read_file);

  return 0;
}
