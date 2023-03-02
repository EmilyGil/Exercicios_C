#include <stdio.h>

int main(void) {
  int numeros[10];
  int i, j, cont=0, qtd_primos=0, qtd_par=0, soma_par=0, qtd_impar=0, soma_impar=0;
  double media_par=0, media_impar=0;
  
  printf("Insira 10 números inteiros:\n");

  for(i=0; i<10; i++){
    scanf("%d", &numeros[i]);
  }

  for(i=0; i<10; i++){
    for(j=1; j<numeros[i+1]; j++){
      if(numeros[i]%j==0){
        cont++;
      }
    }
    if(cont<=2){
      qtd_primos++;
    }
    cont=0;
    
    if(numeros[i]%2==0){
      qtd_par++;
      soma_par+=numeros[i];
    }else{
      qtd_impar++;
      soma_impar+=numeros[i];
    }
  }
  
  media_par = soma_par/qtd_par;
  media_impar = soma_impar/qtd_impar;

  printf("\nA quantidade de números primos: %d", qtd_primos);
  printf("\nA soma dos números ímpares: %d", soma_impar);
  printf("\nA média dos pares: %.2lf", media_par);
  
  return 0;
}
