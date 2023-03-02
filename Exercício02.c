#include <stdio.h>

int main(void) {
  int numeros[10];
  int i, menor_num, soma_par_maior_10 = 0, qtd_impar = 0, soma_maior_20 = 0, qtd_maior_20 = 0;
  float media_maior_20;

  printf("Digite um conjunto de 10 números inteiros:");
  for(i=0; i<10; i++){
    scanf("%d", &numeros[i]);
  }

  menor_num = numeros[0];
  
  for(i=0; i<10; i++){
    if(numeros[i]%2 == 0 && numeros[i]>10){
      soma_par_maior_10 += numeros[i];
    }
    if(numeros[i]%2 != 0){
      qtd_impar++;
    }
    if(numeros[i]>20){
      soma_maior_20 += numeros[i];
      qtd_maior_20++;
    }
  }

  media_maior_20 = soma_maior_20/qtd_maior_20;

  printf("\nMenor número: %d \n", menor_num);
  printf("Soma dos números pares e maiores que 10: %d \n", soma_par_maior_10);
  printf("Quantidade de números ímpares: %d \n", qtd_impar);
  printf("Média dos números maiores que 20: %.2f \n", media_maior_20);
  
  return 0;
}
