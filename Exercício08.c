#include <stdio.h>

int main(void) {
  int num, i;

  printf("Insira um número: ");
  scanf("%d", &num);

  printf("\n===== TABUADA DO %d ======\n", num);
  for(i=1; i<=10; i++){
    printf("\n%d X %d = %d", num, i, num*i);
  }
  return 0;
}
