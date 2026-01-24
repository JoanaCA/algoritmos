#include <stdio.h>

int main() {
	
	int a = 3;
	int b = 0;
	
	if (b == 0) {
		printf("Error");
	
    } else {
		printf("--RESULTADO--\n");
		int div = a / b;
		printf("%d\n", div);
	}
	
	// otra opcion
	if (b != 0) {
		printf("--RESULTADO--\n");
		int div = a / b;
		printf("%d\n", div);
    } else {
		printf("Error");
	}
	
  return 0;
}