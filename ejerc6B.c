#include <stdio.h>

int main() {
	
	int a = 3;
	int b = 1;
	int c = 2;
	
	int aux;
	
	if (a > b){ // lograr que A sea el mas chico, si A es mas grande deben rotarse
		
		aux = a;
		a = b;1
		b = aux; 3                                                                                                                                                                                           	
	}
	a b
	if(a > c){ // que A sea menor que C
		
		aux = a;
		a = c;
		c = aux; 
	}
	a 1 c 2 
	
	if(b > c){ // ordenar b y c
		
		aux = b;3
		b = c;2
		c = aux; 3
	}
	
	printf("MENOR: %d\n",a);
	printf("MEDIO: %d\n",b);
	printf("MAYOR: %d\n",c);
  return 0;
}