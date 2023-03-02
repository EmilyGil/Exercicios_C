#include <stdio.h>

int main(void) {

  int numeros[10];
  int i, j, cont=0, soma_primos=0, qtd_mult_3=0, soma_mult_3=0;
  float media_mult_3=0;

  printf("Insira 10 números inteiros: ");
  for(i=0; i<10; i++){
    scanf("%d", &numeros[i]);
  }
  
  for(i=0; i<10; i++){
    for(j=1; j<=numeros[i]; j++){
      if(numeros[i]%j == 0){
        cont++;
      }
    }
    
    if(cont==2){
      soma_primos+=numeros[i];
    }
    
    if(numeros[i]%3 == 0 && numeros[i]>10){
      qtd_mult_3++;
      soma_mult_3+=numeros[i];
    }
    
    cont = 0;
  }

  media_mult_3 = soma_mult_3/qtd_mult_3;
  printf("\nSoma dos números primos: %d", soma_primos);
  printf("\nMédia dos números múltiplos de 3 que são maiores que 10: %.2f", media_mult_3);
  
  return 0;
}
