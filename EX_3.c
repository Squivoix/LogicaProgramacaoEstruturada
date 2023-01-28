#include <stdio.h>

int main(void) {
  float x, y, z, m;

  printf("Digite o primeiro número: ");
  scanf("%f", &x);
  printf("Digite o segundo número: ");
  scanf("%f", &y);
  printf("Digite o terceiro número: ");
  scanf("%f", &z);

  m = (x + y + z) / 3;

  printf("A média dos números é: %.2f", m);
  
  return 0;
}