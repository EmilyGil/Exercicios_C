#include <stdio.h>

int main(void) {
  int i, idade, soma_idade=0, qtd_pessoas=0, soma_idade_2=0, qtd_pessoas_2=0, qtd_peso=0;
  double peso, maior_peso, media_idade, media_idade_2;

  for(i=0; i<10; i++){
    printf("%d - Idade: ", i+1);
    scanf("%d", &idade);
    printf("     Peso: ");
    scanf("%lf", &peso);
    soma_idade+=idade;
    qtd_pessoas++;

    if(maior_peso<peso){
      maior_peso = peso;
    }

    if(idade>30 && idade<40){
      soma_idade_2 += idade;
      qtd_pessoas_2++;
    }

    if(peso>70){
      qtd_peso++;
    }
  }
  media_idade = soma_idade/qtd_pessoas;
  media_idade_2 = soma_idade_2/qtd_pessoas_2;
  printf("\nMédia das idades: %.2lf", media_idade);
  printf("\nMaior peso: %.2lf", maior_peso);
  printf("\nA média das idades das pessoas com idade entre 30 e 40 anos: %.2lf", media_idade_2);
  printf("\nA quantidade de pessoas com peso superior a 70 quilos: %d", qtd_peso);
  
  return 0;
}
