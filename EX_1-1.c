#include <stdio.h>

int main(void) {
  int n;
  int m;

  printf("Digite um número: ");
  scanf("%d", &n);

  if(n % 2 == 0) { // Se for par
    m = n * 2;
    printf("O dobro do número é: %d", m);
  } else {
    m = n * 3;
    printf("O triplo do número é: %d", m);
  }

  return 0;
}