#include <stdio.h>

int main(){
  int idade, opcao, qtd_regular=0, qtd_bom=0, qtd_otimo=0, soma_idade_regular=0, soma_idade_bom=0, soma_idade_otimo=0, total_pessoas=0;
  double media_idade_otimo=0;
  
  printf("Idade: ");
  scanf("%d", &idade);
  while(idade>0){
    printf("\nO que achou do filme?\n1 - Regular\n2 - Bom\n3 - Ótimo\n");
    scanf("%d", &opcao);
    total_pessoas++;

    switch(opcao){
      case 1:
        qtd_regular++;
        soma_idade_regular+=idade;
        break;
      case 2:
        qtd_bom++;
        soma_idade_bom+=idade;
        break;
      case 3:
        qtd_otimo++;
        soma_idade_otimo+=idade;
        break;
      default:
        printf("\nOpção inválida!\n");
    }
    
    printf("\nIdade: ");
    scanf("%d", &idade);
  }
  
  media_idade_otimo = soma_idade_otimo/qtd_otimo;
  printf("\nTotal de pessoas: %d", total_pessoas);
  printf("\nA média das idades das pessoas que responderam ótimo: %.2lf", media_idade_otimo);
  printf("\nA quantidade de pessoas que responderam regular: %d", qtd_regular);
  printf("\nA quantidade de pessoas que responderam bom: %d", qtd_bom);
  
  return 0;
}
