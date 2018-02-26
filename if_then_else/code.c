#include <stdio.h>

int foo(int a) {
  int b = 0;
  if (a == 0) {
    b = 1;  
  } else {
    b = 2;   
  }
  return b;
}


int main() {
  int a = 0;
  printf("%d", foo(a));
  return 0;
}
