#include <stdio.h>

int main(void) {
  short validPass = 21468;
  int pass;
  
  printf("Digite a senha: ");
  scanf("%d", &pass);

  if(pass == validPass) {
    printf("Acesso Permitido!! {Senha Válida}");
  } else {
    printf("Acesso Negado!! {Senha Inválida}");
  }

  return 0;
}