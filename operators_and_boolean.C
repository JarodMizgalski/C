#include <stdio.h>

int main () {
  int x = 5;
  int y = 3;
  x += 5;
  printf("%d\n", ++x);
  printf("%d\n", --x);
  printf("%d\n", x % y);
  printf("%d\n", x);
  return 0;
}
