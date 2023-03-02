#include <stdio.h>

int main(void) {
  int idade, soma=0, qtd=0;
  float media;
  
  printf("Idade: ");
  scanf("%d", &idade);

  while(idade>0){
    soma+=idade;
    qtd++;
    printf("\nIdade: ");
    scanf("%d", &idade);
  }

  media = soma/qtd;
  printf("Média das idades digitadas: %.2f", media);
  return 0;
}
