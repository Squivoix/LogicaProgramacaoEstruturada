#include <stdio.h>

int main(void) {
  
  printf("%5s\n", "_");
  printf("%4s \\ \n", "/");
  printf("%3s %3s\n", "/", "\\");
  printf("%2s %5s\n", "|", "|");
  
  printf("%3s %3s\n", "\\", "/");
  printf("%4s /\n", "\\");
  printf("%7s\n", "▔");
  
  return 0;
}
