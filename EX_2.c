#include <stdio.h>

int main(void) {
  int anoNascimento, anoAtual, idade, idade2050;
  
  printf("Digite o seu ano de nascimento: ");
  scanf("%d", &anoNascimento);

  printf("Digite o ano atual: ");
  scanf("%d", &anoAtual);

  idade = anoAtual - anoNascimento;
  idade2050 = 2050 - anoNascimento;

  printf("Sua idade: %d\nSua idade em 2050: %d", idade, idade2050);
  return 0;
}