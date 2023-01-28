#include <stdio.h>

int main(void) {
  float n = 25.4; //output: 25
  float m = 25.5; //output: 26
  float o = 25.6; //output: 26

  printf("%.0f\n", n);
  printf("%.0f\n", m);
  printf("%.0f", o);
    
  return 0;
}