#include <stdio.h>

int main(void) {
  int i, qtd_3000=0;
  double salarios[10], maior_salario = 0, menor_salario;

  for(i=0; i<10; i++){
    printf("Salário: ");
    scanf("%lf", &salarios[i]);
  }
  menor_salario = salarios[i];
  for(i=0; i<10; i++){
    if(salarios[i]>maior_salario){
      maior_salario = salarios[i];
    }
    
    if(salarios[i]<menor_salario){
      menor_salario = salarios[i];
    }

    if(salarios[i]>3000){
      qtd_3000++;
    }
  }

  printf("\nMaior salário: %lf", maior_salario);
  printf("\nMenor salário: %lf", menor_salario);
  printf("\nQtd de pessoas com salários superior a 3 mil: %d", qtd_3000);
  return 0;
}
