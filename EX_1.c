#include <stdio.h>

int main(void) {
  // x = 13
  // y = 12
  // z = 10
 
  int x = 1, y = 2, z = 3;
  x += y += z += 7;

  printf("x = %d\ny = %d\nz = %d", x, y, z);
  return 0;
}