#include <stdio.h>

int main(void) {
  int numeros[10];
  int i, j, fat;

  printf("Insira 10 números inteiros: \n");
  for(i=0;i<10;i++){
    scanf("%d", &numeros[i]);
  }

  for(i=0; i<10; i++){
    fat = numeros[i];
    for(j=1; j<numeros[i]; j++){
      fat *= j;
    }
    printf("\nO fatorial de %d é %d", numeros[i], fat);
  }
  
  return 0;
}
