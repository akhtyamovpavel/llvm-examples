#include <stdio.h>


int power(int a, int base) {
	int result = 1;
	for (int i = 0; i < base; ++i) {
		result *= a;	
	}
  return result;
}

int main() {
	int result = power(3, 5);
  printf("%d", result);
  return 0;
}
