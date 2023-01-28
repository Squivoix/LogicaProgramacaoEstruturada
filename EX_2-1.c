#include <stdio.h>

int main(void) {
  int n;
  int m = 0;
  
  int lng[] = {1, 3, 5, 7, 8, 10, 12};
  
  printf("Digite um mês em número: ");
  scanf("%d", &n);

  if(n == 2) {
    m = 28;
  } else {
    for(int i = 0; i < sizeof(lng)/sizeof(int); i++) {
      if(n == lng[i]) {
        m = 31;
        break;
      }
    }

    if(m == 0) {
      m = 30;
    }
  }

  printf("São %d dias no mês %d", m, n);
    
  return 0;
}